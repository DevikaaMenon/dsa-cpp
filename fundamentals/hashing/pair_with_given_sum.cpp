#include <bits/stdc++.h>
using namespace std;

bool hasPairWithSum(vector<int>& arr, int target) {
    unordered_set<int> seen;
    for (int x : arr) {
        if (seen.count(target - x)) return true;
        seen.insert(x);
    }
    return false;
}

int main() {
    int n, target; cin >> n >> target;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    cout << (hasPairWithSum(arr, target) ? "Pair found" : "No pair") << "\n";
}
