#include <bits/stdc++.h>
using namespace std;

class StackUsingQueue {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for (int i = 0; i < (int)q.size() - 1; i++) { q.push(q.front()); q.pop(); }
    }
    void pop() { q.pop(); }
    int top() { return q.front(); }
};

int main() {
    StackUsingQueue s;
    s.push(1); s.push(2); s.push(3);
    cout << s.top() << "\n";
    s.pop();
    cout << s.top() << "\n";
}
