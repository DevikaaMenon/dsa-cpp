#include <bits/stdc++.h>
using namespace std;

class QueueUsingStacks {
    stack<int> s1, s2;
public:
    void enqueue(int x) { s1.push(x); }
    int dequeue() {
        if (s2.empty())
            while (!s1.empty()) { s2.push(s1.top()); s1.pop(); }
        int front = s2.top(); s2.pop();
        return front;
    }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout << q.dequeue() << "\n";
    cout << q.dequeue() << "\n";
}
