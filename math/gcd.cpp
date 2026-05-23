#include <bits/stdc++.h>
using namespace std;

// GCD via the Euclidean Algorithm: gcd(a, b) = gcd(b, a % b).
// Each call reduces the problem; remainder halves at least every two steps.
// Time: O(log(min(a, b)))  Space: O(log n) call stack
class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};
