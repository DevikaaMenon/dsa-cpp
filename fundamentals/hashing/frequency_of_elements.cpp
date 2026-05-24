#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    map<int, int> freq;
    for (int x : arr) freq[x]++;
    for (auto& [val, cnt] : freq) cout << val << " -> " << cnt << "\n";
}
