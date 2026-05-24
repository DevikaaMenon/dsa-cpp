#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* merge(Node* l1, Node* l2) {
    if (!l1) return l2; if (!l2) return l1;
    if (l1->data <= l2->data) { l1->next = merge(l1->next, l2); return l1; }
    l2->next = merge(l1, l2->next); return l2;
}

Node* getMiddle(Node* head) {
    Node* slow = head, *fast = head->next;
    while (fast && fast->next) { slow = slow->next; fast = fast->next->next; }
    return slow;
}

Node* mergeSort(Node* head) {
    if (!head || !head->next) return head;
    Node* mid = getMiddle(head);
    Node* right = mid->next; mid->next = nullptr;
    return merge(mergeSort(head), mergeSort(right));
}

void display(Node* head) {
    while (head) { cout << head->data << " -> "; head = head->next; }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(4); head->next = new Node(2);
    head->next->next = new Node(1); head->next->next->next = new Node(3);
    display(mergeSort(head));
}
