#include <bits/stdc++.h>
using namespace std;

// LeetCode 2149 — Rearrange Array Elements by Sign
// Place positives at even indices and negatives at odd indices in a single pass.
// Two pointers advance by 2, so each category fills its own interleaved slots.
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int posIdx = 0;  // next even index (for positives)
        int negIdx = 1;  // next odd index  (for negatives)

        for (int x : nums) {
            if (x > 0) {
                result[posIdx] = x;
                posIdx += 2;
            } else {
                result[negIdx] = x;
                negIdx += 2;
            }
        }
        return result;
    }
};
