#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s) {
    int lo = 0, hi = s.size() - 1;
    while (lo < hi) {
        while (lo < hi && !isalnum(s[lo])) lo++;
        while (lo < hi && !isalnum(s[hi])) hi--;
        if (tolower(s[lo]) != tolower(s[hi])) return false;
        lo++; hi--;
    }
    return true;
}

int main() {
    string s; getline(cin, s);
    cout << (isPalindrome(s) ? "Palindrome" : "Not Palindrome") << "\n";
}
