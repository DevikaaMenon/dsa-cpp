#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; Node(int x) : data(x), next(nullptr) {} };

class Stack {
    Node* top = nullptr;
public:
    void push(int x) { Node* node = new Node(x); node->next = top; top = node; }
    void pop() { if (top) { Node* tmp = top; top = top->next; delete tmp; } }
    int peek() { return top->data; }
    bool isEmpty() { return top == nullptr; }
};

int main() {
    Stack st;
    st.push(10); st.push(20); st.push(30);
    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";
}
