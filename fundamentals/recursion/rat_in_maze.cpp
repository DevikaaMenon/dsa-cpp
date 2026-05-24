#include <bits/stdc++.h>
using namespace std;

bool solve(vector<vector<int>>& maze, int x, int y, int n, vector<vector<int>>& sol) {
    if (x == n - 1 && y == n - 1) { sol[x][y] = 1; return true; }
    if (x >= 0 && y >= 0 && x < n && y < n && maze[x][y] && !sol[x][y]) {
        sol[x][y] = 1;
        if (solve(maze, x + 1, y, n, sol) || solve(maze, x, y + 1, n, sol)) return true;
        sol[x][y] = 0;
    }
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> maze = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
    vector<vector<int>> sol(n, vector<int>(n, 0));
    if (solve(maze, 0, 0, n, sol))
        for (auto& row : sol) { for (int x : row) cout << x << " "; cout << "\n"; }
    else cout << "No path\n";
}
