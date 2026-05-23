#include <bits/stdc++.h>
using namespace std;

// Maximum Subarray Sum — Brute Force O(n^3)
// Enumerate every subarray [i..j] and compute its sum with a third loop.
// Note: Kadane's Algorithm solves this in O(n) — this version is for reference.
int maxSubarraySum(const vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++)
                sum += arr[k];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << maxSubarraySum(arr) << "\n";
    return 0;
}
