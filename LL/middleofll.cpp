/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 //naive 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n=0;
       ListNode* temp=head;
       while (temp != nullptr) {
            temp = temp->next;
            n++;
        }
        int ind=n/2;
        ListNode* it=head;

        while(ind--){
            it=it->next;
        }
        return it;
    }
};

//optimal
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};