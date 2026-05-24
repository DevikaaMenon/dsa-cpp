#include <bits/stdc++.h>
using namespace std;

void fill(vector<vector<int>>& img, int r, int c, int oldColor, int newColor) {
    if (r < 0 || c < 0 || r >= (int)img.size() || c >= (int)img[0].size()) return;
    if (img[r][c] != oldColor) return;
    img[r][c] = newColor;
    fill(img, r+1, c, oldColor, newColor); fill(img, r-1, c, oldColor, newColor);
    fill(img, r, c+1, oldColor, newColor); fill(img, r, c-1, oldColor, newColor);
}

int main() {
    vector<vector<int>> img = {{1,1,1},{1,1,0},{1,0,1}};
    fill(img, 1, 1, 1, 2);
    for (auto& row : img) { for (int x : row) cout << x << " "; cout << "\n"; }
}
