#include <bits/stdc++.h>
using namespace std;

// Minimizes number of writes — useful when memory writes are costly.
void cycleSort(vector<int>& arr) {
    int n = arr.size(), writes = 0;
    for (int start = 0; start < n - 1; start++) {
        int item = arr[start], pos = start;
        for (int i = start + 1; i < n; i++) if (arr[i] < item) pos++;
        if (pos == start) continue;
        while (item == arr[pos]) pos++;
        swap(arr[pos], item); writes++;
        while (pos != start) {
            pos = start;
            for (int i = start + 1; i < n; i++) if (arr[i] < item) pos++;
            while (item == arr[pos]) pos++;
            swap(arr[pos], item); writes++;
        }
    }
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    cycleSort(arr);
    for (int x : arr) cout << x << " ";
}
