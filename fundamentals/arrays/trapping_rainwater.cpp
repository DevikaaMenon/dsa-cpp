#include <bits/stdc++.h>
using namespace std;

// Two-pointer approach: O(n) time, O(1) space
int trap(vector<int>& height) {
    int lo = 0, hi = height.size() - 1;
    int leftMax = 0, rightMax = 0, water = 0;
    while (lo <= hi) {
        if (height[lo] <= height[hi]) {
            if (height[lo] >= leftMax) leftMax = height[lo];
            else water += leftMax - height[lo];
            lo++;
        } else {
            if (height[hi] >= rightMax) rightMax = height[hi];
            else water += rightMax - height[hi];
            hi--;
        }
    }
    return water;
}

int main() {
    int n; cin >> n;
    vector<int> h(n);
    for (int& x : h) cin >> x;
    cout << trap(h) << "\n";
}
