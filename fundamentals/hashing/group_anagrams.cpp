#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (string& s : strs) {
        string key = s; sort(key.begin(), key.end());
        mp[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& [key, group] : mp) result.push_back(group);
    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    for (auto& group : groupAnagrams(strs)) {
        for (string& s : group) cout << s << " ";
        cout << "\n";
    }
}
