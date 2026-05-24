#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inStack) {
    visited[node] = inStack[node] = true;
    for (int nb : adj[node]) {
        if (!visited[nb] && dfs(nb, adj, visited, inStack)) return true;
        else if (inStack[nb]) return true;
    }
    inStack[node] = false;
    return false;
}

bool hasCycle(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false), inStack(n, false);
    for (int i = 0; i < n; i++)
        if (!visited[i] && dfs(i, adj, visited, inStack)) return true;
    return false;
}

int main() {
    int n = 4;
    vector<vector<int>> adj(n);
    adj[0] = {1}; adj[1] = {2}; adj[2] = {3}; adj[3] = {1};
    cout << (hasCycle(n, adj) ? "Cycle exists" : "No cycle") << "\n";
}
