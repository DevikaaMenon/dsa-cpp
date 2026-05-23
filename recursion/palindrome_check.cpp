#include <bits/stdc++.h>
using namespace std;

// Check if string s is a palindrome using recursion.
// Compare characters at mirrored positions i and n-1-i.
// Base case: i >= n/2 means all pairs matched — it's a palindrome.
bool isPalindrome(const string& s, int i, int n) {
    if (i >= n / 2) return true;
    if (s[i] != s[n - 1 - i]) return false;
    return isPalindrome(s, i + 1, n);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    if (isPalindrome(s, 0, s.size()))
        cout << "It's a palindrome\n";
    else
        cout << "It's not a palindrome\n";

    return 0;
}
