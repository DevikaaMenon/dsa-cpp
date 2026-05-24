#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    long long a, b; cin >> a >> b;
    cout << "Add: " << (a + b) % MOD << "\n";
    cout << "Mul: " << (a % MOD * (b % MOD)) % MOD << "\n";
    // Subtraction with mod to avoid negative
    cout << "Sub: " << ((a - b) % MOD + MOD) % MOD << "\n";
}
