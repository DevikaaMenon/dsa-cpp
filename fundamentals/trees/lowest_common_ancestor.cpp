#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

Node* lca(Node* root, int p, int q) {
    if (!root || root->data == p || root->data == q) return root;
    Node* left = lca(root->left, p, q);
    Node* right = lca(root->right, p, q);
    if (left && right) return root;
    return left ? left : right;
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(5); root->right = new Node(1);
    root->left->left = new Node(6); root->left->right = new Node(2);
    cout << "LCA of 5 and 1: " << lca(root, 5, 1)->data << "\n";
    cout << "LCA of 6 and 2: " << lca(root, 6, 2)->data << "\n";
}
