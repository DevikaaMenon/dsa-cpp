#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* prev; Node* next;
    Node(int x) : data(x), prev(nullptr), next(nullptr) {}
};

Node* insertFront(Node* head, int val) {
    Node* node = new Node(val);
    if (head) { node->next = head; head->prev = node; }
    return node;
}

void displayForward(Node* head) {
    while (head) { cout << head->data << " <-> "; head = head->next; }
    cout << "NULL\n";
}

int main() {
    Node* head = nullptr;
    head = insertFront(head, 3);
    head = insertFront(head, 2);
    head = insertFront(head, 1);
    displayForward(head);
}
