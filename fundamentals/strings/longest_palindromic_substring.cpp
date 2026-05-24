#include <bits/stdc++.h>
using namespace std;

// Expand around each center (both odd and even length palindromes).
string longestPalindrome(string s) {
    int n = s.size(), start = 0, maxLen = 1;
    auto expand = [&](int l, int r) {
        while (l >= 0 && r < n && s[l] == s[r]) { l--; r++; }
        if (r - l - 1 > maxLen) { maxLen = r - l - 1; start = l + 1; }
    };
    for (int i = 0; i < n; i++) { expand(i, i); expand(i, i + 1); }
    return s.substr(start, maxLen);
}

int main() {
    string s; cin >> s;
    cout << longestPalindrome(s) << "\n";
}
