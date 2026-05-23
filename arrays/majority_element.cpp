#include <bits/stdc++.h>
using namespace std;

// LeetCode 169 — Majority Element
// Boyer-Moore Majority Vote Algorithm:
//   Maintain a candidate and a count. When count hits 0 a new candidate is
//   elected. The majority element (> n/2 occurrences) always survives because
//   it outnumbers the combined votes of all other elements.
// A second pass verifies the candidate actually exceeds n/2.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0, count = 0;

        // Phase 1: elect the candidate
        for (int x : nums) {
            if (count == 0) {
                candidate = x;
                count = 1;
            } else if (x == candidate) {
                count++;
            } else {
                count--;
            }
        }

        // Phase 2: verify (problem guarantees a majority exists, but kept for safety)
        int freq = 0;
        for (int x : nums)
            if (x == candidate) freq++;

        return (freq > (int)nums.size() / 2) ? candidate : -1;
    }
};
