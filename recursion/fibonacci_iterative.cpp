#include <bits/stdc++.h>
using namespace std;

// Print first n Fibonacci numbers iteratively using three rolling variables.
// Time: O(n)  Space: O(1)
void printFibonacci(int n) {
    if (n <= 0) return;

    int a = 1, b = 1;
    cout << a << " ";
    if (n == 1) return;
    cout << b << " ";

    for (int i = 2; i < n; i++) {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    printFibonacci(n);
    return 0;
}
