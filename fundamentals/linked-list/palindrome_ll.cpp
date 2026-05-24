#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* findMiddle(Node* head) {
    Node* slow = head, *fast = head->next;
    while (fast && fast->next) { slow = slow->next; fast = fast->next->next; }
    return slow;
}

Node* reverse(Node* head) {
    Node* prev = nullptr, *cur = head;
    while (cur) { Node* nx = cur->next; cur->next = prev; prev = cur; cur = nx; }
    return prev;
}

bool isPalindrome(Node* head) {
    Node* mid = findMiddle(head);
    Node* second = reverse(mid->next);
    Node* p1 = head, *p2 = second;
    bool result = true;
    while (p2) { if (p1->data != p2->data) { result = false; break; } p1 = p1->next; p2 = p2->next; }
    mid->next = reverse(second);
    return result;
}

int main() {
    Node* head = new Node(1); head->next = new Node(2);
    head->next->next = new Node(2); head->next->next->next = new Node(1);
    cout << (isPalindrome(head) ? "Palindrome" : "Not Palindrome") << "\n";
}
