#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3};

    sort(arr.begin(), arr.end());
    cout << "Ascending: "; for (int x : arr) cout << x << " "; cout << "\n";

    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Descending: "; for (int x : arr) cout << x << " "; cout << "\n";

    // Sort by absolute value
    sort(arr.begin(), arr.end(), [](int a, int b) { return abs(a) < abs(b); });
    cout << "By abs: "; for (int x : arr) cout << x << " "; cout << "\n";

    // Partial sort: smallest 3 elements
    partial_sort(arr.begin(), arr.begin() + 3, arr.end());
    cout << "Partial (3): "; for (int x : arr) cout << x << " "; cout << "\n";
}
