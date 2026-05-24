#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

int checkBalanced(Node* root) {
    if (!root) return 0;
    int lh = checkBalanced(root->left);
    if (lh == -1) return -1;
    int rh = checkBalanced(root->right);
    if (rh == -1) return -1;
    if (abs(lh - rh) > 1) return -1;
    return 1 + max(lh, rh);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2); root->right = new Node(3);
    root->left->left = new Node(4);
    cout << (checkBalanced(root) != -1 ? "Balanced" : "Not Balanced") << "\n";
}
