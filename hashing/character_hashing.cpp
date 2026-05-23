#include <bits/stdc++.h>
using namespace std;

// Character frequency queries on a lowercase string.
// Map each character to index [0..25] via (ch - 'a') for O(1) lookup.
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int freq[26] = {0};
    for (char ch : s)
        freq[ch - 'a']++;

    int q;
    cin >> q;

    while (q--) {
        char ch; cin >> ch;
        cout << freq[ch - 'a'] << "\n";
    }
    return 0;
}
