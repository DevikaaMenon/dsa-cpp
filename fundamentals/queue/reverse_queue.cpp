#include <bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int>& q) {
    stack<int> st;
    while (!q.empty()) { st.push(q.front()); q.pop(); }
    while (!st.empty()) { q.push(st.top()); st.pop(); }
}

int main() {
    queue<int> q;
    for (int x : {1, 2, 3, 4, 5}) q.push(x);
    reverseQueue(q);
    while (!q.empty()) { cout << q.front() << " "; q.pop(); }
}
