#include <bits/stdc++.h>
using namespace std;

// Frequency queries using a fixed-size array hash.
// Precompute: O(n)  Query: O(1)
// Constraint: values must be in range [0, MAX_VAL].
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    const int MAX_VAL = 12;
    int freq[MAX_VAL + 1] = {0};

    int n;
    cin >> n;

    // Build frequency table
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int x; cin >> x;
        cout << freq[x] << "\n";
    }
    return 0;
}
