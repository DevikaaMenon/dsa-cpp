#include <bits/stdc++.h>
using namespace std;

// Brute force: for each number in [0..n], scan the array to check presence.
// Time: O(n^2)  Space: O(1)
int findMissingNaive(const vector<int>& arr, int n) {
    for (int i = 0; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < (int)arr.size(); j++) {
            if (arr[j] == i) { found = true; break; }
        }
        if (!found) return i;
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    cout << findMissingNaive(arr, n) << "\n";
    return 0;
}
