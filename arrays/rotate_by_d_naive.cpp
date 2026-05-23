#include <bits/stdc++.h>
using namespace std;

// Left-rotates arr by d positions using a temporary array.
// Time: O(n)  Space: O(d)
void rotateByD(vector<int>& arr, int d) {
    int n = arr.size();
    d = d % n;  // Handle d >= n

    // Save the first d elements
    vector<int> temp(arr.begin(), arr.begin() + d);

    // Shift remaining elements to the front
    for (int i = d; i < n; i++)
        arr[i - d] = arr[i];

    // Restore saved elements at the back
    for (int i = 0; i < d; i++)
        arr[n - d + i] = temp[i];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int d;
    cin >> d;

    rotateByD(arr, d);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];

    return 0;
}
