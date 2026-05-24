#include <bits/stdc++.h>
using namespace std;

bool bfsCheck(int src, vector<vector<int>>& adj, vector<int>& color) {
    queue<int> q;
    color[src] = 0; q.push(src);
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int nb : adj[node]) {
            if (color[nb] == -1) { color[nb] = 1 - color[node]; q.push(nb); }
            else if (color[nb] == color[node]) return false;
        }
    }
    return true;
}

bool isBipartite(int n, vector<vector<int>>& adj) {
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++) if (color[i] == -1 && !bfsCheck(i, adj, color)) return false;
    return true;
}

int main() {
    int n = 4;
    vector<vector<int>> adj(n);
    adj[0] = {1,3}; adj[1] = {0,2}; adj[2] = {1,3}; adj[3] = {0,2};
    cout << (isBipartite(n, adj) ? "Bipartite" : "Not Bipartite") << "\n";
}
