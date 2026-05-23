#include <bits/stdc++.h>
using namespace std;

// Returns the second smallest element, or INT_MAX if it doesn't exist.
int secondSmallest(const vector<int>& arr) {
    int smallest = arr[0];
    int second = INT_MAX;

    for (int i = 1; i < (int)arr.size(); i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if (arr[i] != smallest && arr[i] < second) {
            // Guard against duplicates of the minimum
            second = arr[i];
        }
    }
    return second;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << secondSmallest(arr) << "\n";
    return 0;
}
