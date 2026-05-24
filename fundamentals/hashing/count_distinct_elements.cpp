#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    unordered_set<int> s(arr.begin(), arr.end());
    cout << s.size() << "\n";
}
