#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, stack<int>& st) {
    visited[node] = true;
    for (int nb : adj[node]) if (!visited[nb]) dfs(nb, adj, visited, st);
    st.push(node);
}

vector<int> topoSort(int n, vector<vector<int>>& adj) {
    vector<bool> visited(n, false);
    stack<int> st;
    for (int i = 0; i < n; i++) if (!visited[i]) dfs(i, adj, visited, st);
    vector<int> order;
    while (!st.empty()) { order.push_back(st.top()); st.pop(); }
    return order;
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    adj[5] = {2,0}; adj[4] = {0,1}; adj[2] = {3}; adj[3] = {1};
    for (int x : topoSort(n, adj)) cout << x << " ";
}
