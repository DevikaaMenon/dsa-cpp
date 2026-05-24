#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

// Floyd's Cycle Detection (slow/fast pointers)
bool hasCycle(Node* head) {
    Node* slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = head->next; // creates cycle
    cout << (hasCycle(head) ? "Cycle detected" : "No cycle") << "\n";
}
