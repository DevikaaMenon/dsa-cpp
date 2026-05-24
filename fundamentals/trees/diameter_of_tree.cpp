#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

int diameter(Node* root, int& maxD) {
    if (!root) return 0;
    int lh = diameter(root->left, maxD);
    int rh = diameter(root->right, maxD);
    maxD = max(maxD, lh + rh);
    return 1 + max(lh, rh);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2); root->right = new Node(3);
    root->left->left = new Node(4); root->left->right = new Node(5);
    int maxD = 0;
    diameter(root, maxD);
    cout << "Diameter: " << maxD << "\n";
}
