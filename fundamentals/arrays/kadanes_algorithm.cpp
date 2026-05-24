#include <bits/stdc++.h>
using namespace std;

// Maximum subarray sum — Kadane's Algorithm O(n)
int maxSubarraySum(vector<int>& arr) {
    int maxSum = arr[0], current = arr[0];
    for (int i = 1; i < (int)arr.size(); i++) {
        current = max(arr[i], current + arr[i]);
        maxSum = max(maxSum, current);
    }
    return maxSum;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    cout << maxSubarraySum(arr) << "\n";
}
