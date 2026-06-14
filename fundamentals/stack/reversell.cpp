class Solution {
  public:
    Node* reverseList(Node* head) {
        if (head == nullptr) return head;

        stack<Node*> S;

        Node* temp = head;
        while (temp != nullptr) {
            S.push(temp);
            temp = temp->next;
        }

        Node* it = S.top();
        head = it;
        S.pop();

        while (!S.empty()) {
            it->next = S.top();
            S.pop();
            it = it->next;
        }

        it->next = nullptr;   

        return head;
    }
};