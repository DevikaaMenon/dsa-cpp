#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> firstOccurrence;
    int prefix = 0, maxLen = 0;
    for (int i = 0; i < (int)arr.size(); i++) {
        prefix += arr[i];
        if (prefix == k) maxLen = i + 1;
        if (firstOccurrence.count(prefix - k))
            maxLen = max(maxLen, i - firstOccurrence[prefix - k]);
        if (!firstOccurrence.count(prefix)) firstOccurrence[prefix] = i;
    }
    return maxLen;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    cout << longestSubarrayWithSumK(arr, k) << "\n";
}
