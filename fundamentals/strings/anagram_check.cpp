#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string& a, string& b) {
    if (a.size() != b.size()) return false;
    int freq[26] = {};
    for (char c : a) freq[c - 'a']++;
    for (char c : b) freq[c - 'a']--;
    for (int f : freq) if (f != 0) return false;
    return true;
}

int main() {
    string a, b; cin >> a >> b;
    cout << (isAnagram(a, b) ? "Anagram" : "Not Anagram") << "\n";
}
