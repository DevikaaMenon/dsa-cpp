#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* insert(Node* head, int val) {
    Node* node = new Node(val);
    if (!head) return node;
    Node* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = node;
    return head;
}

void display(Node* head) {
    while (head) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n";
}

Node* deleteNode(Node* head, int val) {
    if (!head) return nullptr;
    if (head->data == val) return head->next;
    Node* cur = head;
    while (cur->next && cur->next->data != val) cur = cur->next;
    if (cur->next) cur->next = cur->next->next;
    return head;
}

int main() {
    Node* head = nullptr;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    display(head);
    head = deleteNode(head, 2);
    display(head);
}
