#include <bits/stdc++.h>
using namespace std;

void subsets(vector<int>& nums, int idx, vector<int>& cur) {
    if (idx == (int)nums.size()) {
        for (int x : cur) cout << x << " ";
        cout << "| ";
        return;
    }
    cur.push_back(nums[idx]);
    subsets(nums, idx + 1, cur);
    cur.pop_back();
    subsets(nums, idx + 1, cur);
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;
    vector<int> cur;
    subsets(nums, 0, cur);
}
