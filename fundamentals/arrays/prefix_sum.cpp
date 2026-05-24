#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;

    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    // Range sum query [l, r]
    int q; cin >> q;
    while (q--) {
        int l, r; cin >> l >> r;
        int sum = prefix[r] - (l > 0 ? prefix[l - 1] : 0);
        cout << sum << "\n";
    }
}
