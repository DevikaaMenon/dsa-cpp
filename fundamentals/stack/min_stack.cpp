#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<long long> st;
    long long minVal;
public:
    void push(long long x) {
        if (st.empty()) { st.push(x); minVal = x; }
        else if (x < minVal) { st.push(2 * x - minVal); minVal = x; }
        else st.push(x);
    }
    void pop() {
        if (st.top() < minVal) minVal = 2 * minVal - st.top();
        st.pop();
    }
    long long top() { return st.top() < minVal ? minVal : st.top(); }
    long long getMin() { return minVal; }
};

int main() {
    MinStack ms;
    ms.push(5); ms.push(3); ms.push(7);
    cout << ms.getMin() << "\n";
    ms.pop();
    cout << ms.getMin() << "\n";
}
