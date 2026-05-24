#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";
    string prefix = strs[0];
    for (int i = 1; i < (int)strs.size(); i++)
        while (strs[i].find(prefix) != 0)
            prefix = prefix.substr(0, prefix.size() - 1);
    return prefix;
}

int main() {
    int n; cin >> n;
    vector<string> strs(n);
    for (string& s : strs) cin >> s;
    cout << longestCommonPrefix(strs) << "\n";
}
