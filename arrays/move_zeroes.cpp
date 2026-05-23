#include <bits/stdc++.h>
using namespace std;

// LeetCode 283 — Move Zeroes
// Moves all 0s to the end while preserving relative order of non-zero elements.
// Two-pointer: j tracks the next position for a non-zero element.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        // Find the first zero
        int j = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) { j = i; break; }
        }

        if (j == -1) return;  // No zeroes found

        // Swap each subsequent non-zero with the first available zero slot
        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
