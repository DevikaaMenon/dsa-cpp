#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int src, int n, vector<vector<pair<int,int>>>& adj) {
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    dist[src] = 0; pq.push({0, src});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (d > dist[u]) continue;
        for (auto [w, v] : adj[u])
            if (dist[u] + w < dist[v]) { dist[v] = dist[u] + w; pq.push({dist[v], v}); }
    }
    return dist;
}

int main() {
    int n = 5;
    vector<vector<pair<int,int>>> adj(n);
    adj[0].push_back({4,1}); adj[0].push_back({1,2});
    adj[2].push_back({2,1}); adj[1].push_back({1,3});
    adj[2].push_back({5,3}); adj[3].push_back({3,4});
    for (int d : dijkstra(0, n, adj)) cout << d << " ";
}
