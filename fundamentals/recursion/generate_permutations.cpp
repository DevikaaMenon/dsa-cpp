#include <bits/stdc++.h>
using namespace std;

void permutations(vector<int>& nums, int start) {
    if (start == (int)nums.size()) {
        for (int x : nums) cout << x << " ";
        cout << "\n";
        return;
    }
    for (int i = start; i < (int)nums.size(); i++) {
        swap(nums[start], nums[i]);
        permutations(nums, start + 1);
        swap(nums[start], nums[i]);
    }
}

int main() {
    int n; cin >> n;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;
    permutations(nums, 0);
}
