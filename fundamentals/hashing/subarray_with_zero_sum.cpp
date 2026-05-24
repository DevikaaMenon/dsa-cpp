#include <bits/stdc++.h>
using namespace std;

bool hasZeroSumSubarray(vector<int>& arr) {
    unordered_set<int> seen;
    seen.insert(0);
    int prefix = 0;
    for (int x : arr) {
        prefix += x;
        if (seen.count(prefix)) return true;
        seen.insert(prefix);
    }
    return false;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    cout << (hasZeroSumSubarray(arr) ? "Yes" : "No") << "\n";
}
