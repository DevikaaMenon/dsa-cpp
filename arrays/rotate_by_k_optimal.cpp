#include <bits/stdc++.h>
using namespace std;

// Reverses arr[start..end] in-place.
void reverseRange(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start++], arr[end--]);
    }
}

// Left-rotates arr by k positions using the reversal algorithm.
// Three reversals achieve O(n) time with O(1) space:
//   1. Reverse arr[0..k-1]
//   2. Reverse arr[k..n-1]
//   3. Reverse the whole array
void rotateLeft(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;

    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
    reverseRange(arr, 0, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int k;
    cin >> k;

    rotateLeft(arr, k);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];

    return 0;
}
