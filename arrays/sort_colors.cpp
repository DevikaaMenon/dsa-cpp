#include <bits/stdc++.h>
using namespace std;

// LeetCode 75 — Sort Colors (Dutch National Flag Algorithm)
// Three pointers partition the array into [0s | 1s | 2s] in a single pass.
//   low  : boundary of the 0-region (everything left of low is 0)
//   mid  : current element under inspection
//   high : boundary of the 2-region (everything right of high is 2)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++; mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else {
                swap(nums[mid], nums[high]);
                high--;
                // Don't advance mid: the swapped value is uninspected
            }
        }
    }
};
