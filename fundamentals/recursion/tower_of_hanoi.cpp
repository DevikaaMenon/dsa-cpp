#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 0) return;
    hanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << "\n";
    hanoi(n - 1, aux, to, from);
}

int main() { int n; cin >> n; hanoi(n, 'A', 'C', 'B'); }
