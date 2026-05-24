#include <bits/stdc++.h>
using namespace std;

vector<int> shortestPath(int src, int n, vector<vector<int>>& adj) {
    vector<int> dist(n, -1);
    queue<int> q;
    dist[src] = 0; q.push(src);
    while (!q.empty()) {
        int node = q.front(); q.pop();
        for (int nb : adj[node])
            if (dist[nb] == -1) { dist[nb] = dist[node] + 1; q.push(nb); }
    }
    return dist;
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    adj[0] = {1,2}; adj[1] = {0,3}; adj[2] = {0,3,4}; adj[3] = {1,2,5}; adj[4] = {2}; adj[5] = {3};
    for (int d : shortestPath(0, n, adj)) cout << d << " ";
}
