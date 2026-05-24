#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

// Both pointers traverse both lists; they meet at the intersection.
Node* getIntersection(Node* a, Node* b) {
    Node* p1 = a, *p2 = b;
    while (p1 != p2) {
        p1 = p1 ? p1->next : b;
        p2 = p2 ? p2->next : a;
    }
    return p1;
}

int main() {
    Node* common = new Node(8);
    common->next = new Node(10);
    Node* l1 = new Node(3); l1->next = new Node(6); l1->next->next = common;
    Node* l2 = new Node(99); l2->next = common;
    Node* intersect = getIntersection(l1, l2);
    cout << (intersect ? to_string(intersect->data) : "No intersection") << "\n";
}
