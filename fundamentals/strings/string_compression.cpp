#include <bits/stdc++.h>
using namespace std;

// Run-length encoding: "aaabbc" -> "a3b2c1"
string compress(string& s) {
    string result;
    int i = 0;
    while (i < (int)s.size()) {
        char c = s[i];
        int count = 0;
        while (i < (int)s.size() && s[i] == c) { i++; count++; }
        result += c + to_string(count);
    }
    return result;
}

int main() {
    string s; cin >> s;
    cout << compress(s) << "\n";
}
