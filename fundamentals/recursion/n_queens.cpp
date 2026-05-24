#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {
    for (int i = 0; i < row; i++) if (board[i][col] == 'Q') return false;
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) if (board[i][j] == 'Q') return false;
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) if (board[i][j] == 'Q') return false;
    return true;
}

void solve(int row, int n, vector<string>& board, vector<vector<string>>& result) {
    if (row == n) { result.push_back(board); return; }
    for (int col = 0; col < n; col++)
        if (isSafe(board, row, col, n)) {
            board[row][col] = 'Q';
            solve(row + 1, n, board, result);
            board[row][col] = '.';
        }
}

int main() {
    int n; cin >> n;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> result;
    solve(0, n, board, result);
    cout << result.size() << " solutions\n";
}
