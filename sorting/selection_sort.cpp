#include <bits/stdc++.h>
using namespace std;

// Selection Sort: in each pass i, find the minimum in arr[i..n-1] and swap
// it to position i. After n-1 passes the array is fully sorted.
// Time: O(n^2)  Space: O(1)
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr);

    cout << "Sorted: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];

    return 0;
}
