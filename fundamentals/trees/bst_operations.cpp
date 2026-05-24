#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

bool search(Node* root, int val) {
    if (!root) return false;
    if (root->data == val) return true;
    return val < root->data ? search(root->left, val) : search(root->right, val);
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left); cout << root->data << " "; inorder(root->right);
}

int main() {
    Node* root = nullptr;
    for (int x : {5, 3, 7, 1, 4}) root = insert(root, x);
    inorder(root); cout << "\n";
    cout << (search(root, 4) ? "Found" : "Not Found") << "\n";
}
