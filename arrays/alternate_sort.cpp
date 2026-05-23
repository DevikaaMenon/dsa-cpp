#include <bits/stdc++.h>
using namespace std;

// Alternate Sort: rearrange into [largest, smallest, 2nd-largest, 2nd-smallest, ...]
// After sorting, use two inward-moving pointers to interleave largest and smallest.
class Solution {
public:
    vector<int> alternateSort(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<int> result;
        int lo = 0, hi = arr.size() - 1;

        while (lo <= hi) {
            if (lo != hi) {
                result.push_back(arr[hi--]);  // largest remaining
                result.push_back(arr[lo++]);  // smallest remaining
            } else {
                result.push_back(arr[lo++]);  // middle element of odd-length array
            }
        }
        return result;
    }
};
