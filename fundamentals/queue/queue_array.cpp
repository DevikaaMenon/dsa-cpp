#include <bits/stdc++.h>
using namespace std;

class Queue {
    int arr[1000], front = 0, rear = -1, size = 0;
public:
    void enqueue(int x) { arr[++rear] = x; size++; }
    void dequeue() { if (size > 0) { front++; size--; } }
    int peek() { return arr[front]; }
    bool isEmpty() { return size == 0; }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.peek() << "\n";
}
