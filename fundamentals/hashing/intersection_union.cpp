#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;

    unordered_set<int> sa(a.begin(), a.end()), sb(b.begin(), b.end());

    cout << "Intersection: ";
    for (int x : sa) if (sb.count(x)) cout << x << " ";
    cout << "\nUnion: ";
    unordered_set<int> uni(sa.begin(), sa.end());
    uni.insert(sb.begin(), sb.end());
    for (int x : uni) cout << x << " ";
}
