#include <bits/stdc++.h>
using namespace std;

// An element is a leader if it is greater than all elements to its right.
vector<int> findLeaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int maxRight = arr[n - 1];
    leaders.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int& x : arr) cin >> x;
    for (int x : findLeaders(arr)) cout << x << " ";
}
