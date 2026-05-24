#include <bits/stdc++.h>
using namespace std;

char firstNonRepeating(string& s) {
    int freq[26] = {};
    for (char c : s) freq[c - 'a']++;
    for (char c : s) if (freq[c - 'a'] == 1) return c;
    return '_';
}

int main() {
    string s; cin >> s;
    cout << firstNonRepeating(s) << "\n";
}
