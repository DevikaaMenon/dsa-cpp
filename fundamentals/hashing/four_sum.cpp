#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> result;
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int lo = j + 1, hi = n - 1;
            while (lo < hi) {
                long long sum = (long long)nums[i] + nums[j] + nums[lo] + nums[hi];
                if (sum == target) { result.push_back({nums[i],nums[j],nums[lo++],nums[hi--]}); while (lo < hi && nums[lo] == nums[lo-1]) lo++; }
                else if (sum < target) lo++;
                else hi--;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    for (auto& v : fourSum(nums, 0)) { for (int x : v) cout << x << " "; cout << "\n"; }
}
