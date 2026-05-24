#include <bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0, n = heights.size();
    for (int i = 0; i <= n; i++) {
        int h = (i == n) ? 0 : heights[i];
        while (!st.empty() && heights[st.top()] > h) {
            int height = heights[st.top()]; st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }
    return maxArea;
}

int main() {
    int n; cin >> n;
    vector<int> h(n);
    for (int& x : h) cin >> x;
    cout << largestRectangle(h) << "\n";
}
