#include <bits/stdc++.h>
using namespace std;

vector<int> slidingWindowMax(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> result;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        while (!dq.empty() && arr[dq.back()] <= arr[i]) dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1) result.push_back(arr[dq.front()]);
    }
    return result;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    for (int x : slidingWindowMax(arr, k)) cout << x << " ";
}
