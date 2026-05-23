#include <bits/stdc++.h>
using namespace std;

// Reverse array in-place using recursion.
// At each call, swap arr[i] and arr[n-1-i], then recurse on the inner subarray.
// Base case: i >= n/2 means all symmetric pairs have been swapped.
void reverseArr(vector<int>& arr, int i, int n) {
    if (i >= n / 2) return;
    swap(arr[i], arr[n - 1 - i]);
    reverseArr(arr, i + 1, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    reverseArr(arr, 0, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];

    return 0;
}
