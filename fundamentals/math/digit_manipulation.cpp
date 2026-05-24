#include <bits/stdc++.h>
using namespace std;

int digitSum(int n) { int s = 0; while (n) { s += n % 10; n /= 10; } return s; }
int countDigits(int n) { int c = 0; while (n) { c++; n /= 10; } return c; }
int reverseNum(int n) { int r = 0; while (n) { r = r * 10 + n % 10; n /= 10; } return r; }

int main() {
    int n; cin >> n;
    cout << "Sum of digits: " << digitSum(n) << "\n";
    cout << "Count of digits: " << countDigits(n) << "\n";
    cout << "Reversed: " << reverseNum(n) << "\n";
}
