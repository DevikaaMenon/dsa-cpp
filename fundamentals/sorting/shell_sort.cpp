#include <bits/stdc++.h>
using namespace std;

void shellSort(vector<int>& arr) {
    int n = arr.size();
    for (int gap = n / 2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++) {
            int temp = arr[i], j = i;
            while (j >= gap && arr[j - gap] > temp) { arr[j] = arr[j - gap]; j -= gap; }
            arr[j] = temp;
        }
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    shellSort(arr);
    for (int x : arr) cout << x << " ";
}
