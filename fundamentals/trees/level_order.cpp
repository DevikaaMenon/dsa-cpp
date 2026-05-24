#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* left; Node* right; Node(int x) : data(x), left(nullptr), right(nullptr) {} };

void levelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int sz = q.size();
        while (sz--) {
            Node* node = q.front(); q.pop();
            cout << node->data << " ";
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << "\n";
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2); root->right = new Node(3);
    root->left->left = new Node(4); root->left->right = new Node(5);
    levelOrder(root);
}
