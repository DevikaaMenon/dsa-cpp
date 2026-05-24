#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int nb : adj[node]) if (!visited[nb]) dfs(nb, adj, visited);
}

int countComponents(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 0; i < n; i++) if (!visited[i]) { dfs(i, adj, visited); count++; }
    return count;
}

int main() {
    int n = 7;
    vector<vector<int>> adj(n);
    adj[0] = {1}; adj[1] = {0,2}; adj[2] = {1};
    adj[3] = {4}; adj[4] = {3};
    // 5 and 6 are isolated
    cout << "Components: " << countComponents(n, adj) << "\n";
}
