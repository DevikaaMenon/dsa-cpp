#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int vowels = 0, consonants = 0;
    string v = "aeiouAEIOU";
    for (char c : s) {
        if (isalpha(c)) {
            if (v.find(c) != string::npos) vowels++;
            else consonants++;
        }
    }
    cout << "Vowels: " << vowels << " Consonants: " << consonants << "\n";
}
