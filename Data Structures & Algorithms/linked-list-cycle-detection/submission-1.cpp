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

class Solution {
public:
    bool hasCycle(ListNode* head) {
        // no element in ll return false;
        if(head == NULL) return false;
        // slow and fast pointer starting at head
        ListNode* fast = head;
        ListNode* slow = head;
        // run till fast is not null 
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;

            // if slow and fast are connected true else false
            if(slow == fast) return true;
        }
        return false;
    }
};
