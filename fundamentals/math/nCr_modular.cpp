#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1; base %= mod;
    while (exp > 0) { if (exp & 1) result = result * base % mod; base = base * base % mod; exp >>= 1; }
    return result;
}

long long nCr(int n, int r) {
    if (r > n) return 0;
    vector<long long> fact(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i - 1] * i % MOD;
    return fact[n] * power(fact[r], MOD - 2, MOD) % MOD * power(fact[n - r], MOD - 2, MOD) % MOD;
}

int main() {
    int n, r; cin >> n >> r;
    cout << nCr(n, r) << "\n";
}
