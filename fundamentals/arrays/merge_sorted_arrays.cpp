#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSorted(vector<int>& a, vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;
    while (i < (int)a.size() && j < (int)b.size()) {
        if (a[i] <= b[j]) result.push_back(a[i++]);
        else result.push_back(b[j++]);
    }
    while (i < (int)a.size()) result.push_back(a[i++]);
    while (j < (int)b.size()) result.push_back(b[j++]);
    return result;
}

int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& x : a) cin >> x;
    for (int& x : b) cin >> x;
    for (int x : mergeSorted(a, b)) cout << x << " ";
}
