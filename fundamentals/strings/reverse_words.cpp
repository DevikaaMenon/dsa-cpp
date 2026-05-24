#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    istringstream iss(s);
    string word, result;
    vector<string> words;
    while (iss >> word) words.push_back(word);
    reverse(words.begin(), words.end());
    for (int i = 0; i < (int)words.size(); i++)
        result += (i ? " " : "") + words[i];
    return result;
}

int main() {
    string s; getline(cin, s);
    cout << reverseWords(s) << "\n";
}
