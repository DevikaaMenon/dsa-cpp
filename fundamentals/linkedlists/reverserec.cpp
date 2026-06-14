#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* link;
};

node* head = nullptr;

void insert(int val, int pos){
    node* temp = new node();
    temp->data = val;
    temp->link = nullptr;
    if(pos == 1){
        temp->link = head;
        head = temp;
        return;
    }
    node* temp2 = head;
    for(int i = 0; i < pos-2; i++){
        temp2 = temp2->link;
    }
    temp->link = temp2->link;
    temp2->link = temp;
}

void display(node* &head){
    node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << "\n";
}

void rev(node* &head){
    node* current = head, *prev = nullptr, *next;
    while(current != nullptr){
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

node* rdis(node* p){
    if(p->link == nullptr) return p;  // base case: last node is new head
    node* newHead = rdis(p->link);
    node* q = p->link;
    q->link = p;
    p->link = nullptr;
    return newHead;
}

int main(){
    insert(3, 1);
    insert(2, 2);
    insert(4, 3);
    insert(9, 1);

    cout << "Original:  ";
    display(head);

    head = rdis(head);         // updated: captures returned new head
    cout << "Reversed:  ";
    display(head);

    return 0;
}