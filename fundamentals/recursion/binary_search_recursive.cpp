#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int lo, int hi, int target) {
    if (lo > hi) return -1;
    int mid = lo + (hi - lo) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return binarySearch(arr, mid + 1, hi, target);
    return binarySearch(arr, lo, mid - 1, target);
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    int target; cin >> target;
    cout << binarySearch(arr, 0, n - 1, target) << "\n";
}
