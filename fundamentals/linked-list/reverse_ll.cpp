#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* reverseList(Node* head) {
    Node* prev = nullptr, *cur = head;
    while (cur) {
        Node* next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

void display(Node* head) {
    while (head) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    display(head);
    head = reverseList(head);
    display(head);
}
