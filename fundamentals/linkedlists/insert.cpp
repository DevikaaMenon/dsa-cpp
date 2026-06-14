#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* link;
};  // ✅ semicolon  

void insert(node* &head, int v, int pos) {  // ✅ head passed by reference
    node* temp = new node();
    temp->data = v;
    temp->link = nullptr;

    if (pos == 1) {          // ✅ pos==1, not n==1
        temp->link = head;
        head = temp;
        return;
    }

    node* it = head;
    for (int i = 0; i < pos - 2; i++) {
        it = it->link;
    }
    temp->link = it->link;
    it->link = temp;
}

void print(node* &head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main() {
    node* head = nullptr;
    insert(head, 2, 1);  // ✅ pass head
    insert(head, 4, 2);
    insert(head, 6, 3);
    print(head);
    return 0;
}