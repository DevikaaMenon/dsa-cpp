#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int num) {
    for (int i = 0; i < 9; i++) if (board[row][i] == num || board[i][col] == num) return false;
    int br = row - row % 3, bc = col - col % 3;
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) if (board[br+i][bc+j] == num) return false;
    return true;
}

bool solve(vector<vector<int>>& board) {
    for (int r = 0; r < 9; r++) for (int c = 0; c < 9; c++) if (board[r][c] == 0) {
        for (int num = 1; num <= 9; num++) if (isSafe(board, r, c, num)) {
            board[r][c] = num;
            if (solve(board)) return true;
            board[r][c] = 0;
        }
        return false;
    }
    return true;
}

int main() {
    vector<vector<int>> board = {
        {5,3,0,0,7,0,0,0,0},{6,0,0,1,9,5,0,0,0},{0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},{4,0,0,8,0,3,0,0,1},{7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},{0,0,0,4,1,9,0,0,5},{0,0,0,0,8,0,0,7,9}
    };
    solve(board);
    for (auto& row : board) { for (int x : row) cout << x << " "; cout << "\n"; }
}
