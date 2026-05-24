#include <bits/stdc++.h>
using namespace std;

string reverseUsingStack(string s) {
    stack<char> st;
    for (char c : s) st.push(c);
    string result;
    while (!st.empty()) { result += st.top(); st.pop(); }
    return result;
}

int main() {
    string s; cin >> s;
    cout << reverseUsingStack(s) << "\n";
}
