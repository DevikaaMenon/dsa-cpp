#include <bits/stdc++.h>
using namespace std;

void bfs(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front(); q.pop();
        cout << node << " ";
        for (int nb : adj[node])
            if (!visited[nb]) { visited[nb] = true; q.push(nb); }
    }
}

int main() {
    int n = 5;
    vector<vector<int>> adj(n);
    adj[0] = {1, 2}; adj[1] = {0, 3}; adj[2] = {0, 4};
    adj[3] = {1}; adj[4] = {2};
    bfs(0, adj, n);
}
