#include <bits/stdc++.h>
using namespace std;

// LeetCode 1 — Two Sum
// For each element, check if its complement (target - nums[i]) was seen before.
// Store visited elements in a hash map for O(1) lookup.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;  // value → index

        for (int i = 0; i < (int)nums.size(); i++) {
            int complement = target - nums[i];

            if (seen.count(complement))
                return {seen[complement], i};

            seen[nums[i]] = i;
        }
        return {-1, -1};
    }
};
