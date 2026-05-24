#include <bits/stdc++.h>
using namespace std;

// Insert all elements into a set, then find the start of each sequence.
int longestConsecutive(vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    int best = 0;
    for (int x : s) {
        if (!s.count(x - 1)) {
            int cur = x, streak = 1;
            while (s.count(cur + 1)) { cur++; streak++; }
            best = max(best, streak);
        }
    }
    return best;
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;
    cout << longestConsecutive(nums) << "\n";
}
