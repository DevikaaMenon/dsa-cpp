#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string, int> mp;

    mp["apple"] = 3;
    mp["banana"] = 5;
    mp["cherry"] = 2;

    // Iterate
    for (auto& [key, val] : mp) cout << key << " -> " << val << "\n";

    // Lookup
    if (mp.count("banana")) cout << "banana: " << mp["banana"] << "\n";

    // Erase
    mp.erase("cherry");
    cout << "After erase, size: " << mp.size() << "\n";
}
