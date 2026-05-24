#include <bits/stdc++.h>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int x : nums) freq[x]++;
    priority_queue<pair<int,int>> pq;
    for (auto& [val, cnt] : freq) pq.push({cnt, val});
    vector<int> result;
    while (k--) { result.push_back(pq.top().second); pq.pop(); }
    return result;
}

int main() {
    vector<int> nums = {1,1,1,2,2,3};
    for (int x : topKFrequent(nums, 2)) cout << x << " ";
}
