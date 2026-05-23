#include <bits/stdc++.h>
using namespace std;

// Frequency queries for an unbounded integer range using std::map (BST).
// Use when values can be arbitrarily large and an array hash is not feasible.
// Insert/lookup: O(log n)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int x; cin >> x;
        // operator[] returns 0 for missing keys, which is correct here
        cout << freq[x] << "\n";
    }
    return 0;
}
