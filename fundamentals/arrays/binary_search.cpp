#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr, int target) {
    int lo = 0, hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    int target; cin >> target;
    cout << binarySearch(arr, target) << "\n";
}
