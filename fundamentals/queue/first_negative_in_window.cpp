#include <bits/stdc++.h>
using namespace std;

vector<int> firstNegative(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> result;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();
        if (arr[i] < 0) dq.push_back(i);
        if (i >= k - 1) result.push_back(dq.empty() ? 0 : arr[dq.front()]);
    }
    return result;
}

int main() {
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    for (int x : firstNegative(arr, k)) cout << x << " ";
}
