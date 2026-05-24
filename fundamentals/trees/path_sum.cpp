#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

bool hasPathSum(Node* root, int target) {
    if (!root) return false;
    if (!root->left && !root->right) return root->data == target;
    return hasPathSum(root->left, target - root->data) ||
           hasPathSum(root->right, target - root->data);
}

int main() {
    Node* root = new Node(5);
    root->left = new Node(4); root->right = new Node(8);
    root->left->left = new Node(11);
    root->left->left->left = new Node(7); root->left->left->right = new Node(2);
    cout << (hasPathSum(root, 22) ? "Path exists" : "No path") << "\n";
}
