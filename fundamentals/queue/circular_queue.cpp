#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int arr[5], front = -1, rear = -1, cap = 5;
public:
    bool isFull() { return (rear + 1) % cap == front; }
    bool isEmpty() { return front == -1; }
    void enqueue(int x) {
        if (isFull()) return;
        if (isEmpty()) front = 0;
        rear = (rear + 1) % cap;
        arr[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) return;
        if (front == rear) { front = rear = -1; }
        else front = (front + 1) % cap;
    }
    int peek() { return arr[front]; }
};

int main() {
    CircularQueue cq;
    cq.enqueue(1); cq.enqueue(2); cq.enqueue(3);
    cout << cq.peek() << "\n";
    cq.dequeue();
    cout << cq.peek() << "\n";
}
