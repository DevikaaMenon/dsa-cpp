#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n, digits = to_string(n).size(), sum = 0;
    while (n) { sum += pow(n % 10, digits); n /= 10; }
    return sum == original;
}

int main() {
    int n; cin >> n;
    cout << (isArmstrong(n) ? "Armstrong" : "Not Armstrong") << "\n";
}
