#include <bits/stdc++.h>
using namespace std;

// Count subarrays with sum equal to k using prefix sum + hash map.
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixCount;
    prefixCount[0] = 1;
    int sum = 0, count = 0;
    for (int x : nums) {
        sum += x;
        count += prefixCount[sum - k];
        prefixCount[sum]++;
    }
    return count;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> nums(n);
    for (int& x : nums) cin >> x;
    cout << subarraySum(nums, k) << "\n";
}
