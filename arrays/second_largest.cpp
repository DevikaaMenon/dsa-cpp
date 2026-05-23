#include <bits/stdc++.h>
using namespace std;

// Returns the second largest element, or -1 if it doesn't exist.
int secondLargest(const vector<int>& arr) {
    int largest = arr[0];
    int second = -1;

    for (int i = 1; i < (int)arr.size(); i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
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

    cout << secondLargest(arr) << "\n";
    return 0;
}
