#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; Node(int x) : data(x), next(nullptr) {} };

class Queue {
    Node* front = nullptr, *rear = nullptr;
public:
    void enqueue(int x) {
        Node* node = new Node(x);
        if (!rear) { front = rear = node; return; }
        rear->next = node; rear = node;
    }
    void dequeue() {
        if (!front) return;
        Node* tmp = front; front = front->next;
        if (!front) rear = nullptr;
        delete tmp;
    }
    int peek() { return front->data; }
    bool isEmpty() { return front == nullptr; }
};

int main() {
    Queue q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.peek() << "\n";
}
