#include <bits/stdc++.h>
using namespace std;

// Return the nth Fibonacci number using recursion.
// Time: O(2^n)  Space: O(n) call stack
// Note: use memoization or the iterative approach for large n.
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
