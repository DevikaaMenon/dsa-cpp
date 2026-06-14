//fibonacci dynamic programming using memoization
#include <iostream>
#include <vector>

using namespace std; 

int c = 0;
vector<int> dp; 

int fun(int n) {
    c++;
    if (n <= 1) return n;
    if (dp[n] != 0) return dp[n];
    
    dp[n] = fun(n - 1) + fun(n - 2);
    return dp[n];
}

int main() {
    int n = 6;
    dp.assign(n + 1, 0);
    
    cout << "Result: " << fun(n) << endl; 
    return 0;
}