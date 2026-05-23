#include <bits/stdc++.h>
using namespace std;

// Left-rotates arr by 1 position in-place.
void rotateByOne(vector<int>& arr) {
    int n = arr.size();
    int first = arr[0];

    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];

    arr[n - 1] = first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    rotateByOne(arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n"[i == n - 1];

    return 0;
}
