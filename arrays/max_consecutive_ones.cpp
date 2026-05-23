#include <bits/stdc++.h>
using namespace std;

// LeetCode 485 — Max Consecutive Ones
// Single pass: track the running streak and update the global max.
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak = 0, maxStreak = 0;

        for (int x : nums) {
            if (x == 1) {
                streak++;
                maxStreak = max(streak, maxStreak);
            } else {
                streak = 0;
            }
        }
        return maxStreak;
    }
};
