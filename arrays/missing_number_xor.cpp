#include <bits/stdc++.h>
using namespace std;

// XOR approach: xor all array elements and all integers 1..n.
// Every present number cancels itself (a^a=0), leaving only the missing one.
// Time: O(n)  Space: O(1)
int findMissingXOR(const vector<int>& arr, int n) {
    int xorArr = 0;  // XOR of all elements in the array
    int xorFull = 0; // XOR of all integers from 1 to n

    for (int i = 0; i < (int)arr.size(); i++) {
        xorArr ^= arr[i];
        xorFull ^= (i + 1);
    }
    xorFull ^= n;  // Include n itself (arr has n-1 elements)

    return xorFull ^ xorArr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n - 1);
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    cout << "Missing element: " << findMissingXOR(arr, n) << "\n";
    return 0;
}
