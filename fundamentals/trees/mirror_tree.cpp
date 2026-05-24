#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

Node* mirror(Node* root) {
    if (!root) return nullptr;
    swap(root->left, root->right);
    mirror(root->left);
    mirror(root->right);
    return root;
}

void inorder(Node* root) { if (!root) return; inorder(root->left); cout << root->data << " "; inorder(root->right); }

int main() {
    Node* root = new Node(1);
    root->left = new Node(2); root->right = new Node(3);
    inorder(root); cout << "\n";
    mirror(root);
    inorder(root); cout << "\n";
}
