#include <bits/stdc++.h>
using namespace std;

double power(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1.0 / power(x, -n);
    if (n % 2 == 0) { double half = power(x, n / 2); return half * half; }
    return x * power(x, n - 1);
}

int main() { double x; int n; cin >> x >> n; cout << power(x, n) << "\n"; }
