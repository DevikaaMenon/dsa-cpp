#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    for (int nb : adj[node]) {
        if (!visited[nb]) { if (dfs(nb, node, adj, visited)) return true; }
        else if (nb != parent) return true;
    }
    return false;
}

bool hasCycle(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
        if (!visited[i] && dfs(i, -1, adj, visited)) return true;
    return false;
}

int main() {
    int n = 5;
    vector<vector<int>> adj(n);
    adj[0] = {1}; adj[1] = {0,2}; adj[2] = {1,3,4}; adj[3] = {2,4}; adj[4] = {2,3};
    cout << (hasCycle(n, adj) ? "Cycle exists" : "No cycle") << "\n";
}
