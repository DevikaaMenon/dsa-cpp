#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) { return n == 0 ? 0 : n % 10 + sumDigits(n / 10); }

int main() { int n; cin >> n; cout << sumDigits(n) << "\n"; }
