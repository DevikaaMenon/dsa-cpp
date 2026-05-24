#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int nb : adj[node])
        if (!visited[nb]) dfs(nb, adj, visited);
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    adj[0] = {1,2}; adj[1] = {0,3,4}; adj[2] = {0,5};
    adj[3] = {1}; adj[4] = {1}; adj[5] = {2};
    vector<bool> visited(n, false);
    dfs(0, adj, visited);
}
