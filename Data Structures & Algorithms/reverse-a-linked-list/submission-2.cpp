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
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = NULL;
        ListNode* forward = NULL;
        while(current!=NULL){
            forward = current->next;   // forward is current's next
            current->next = previous;  // break link from og ll to null previous
            previous = current;        // previous is now shifted to curr
            current = forward;         // current is shifted too
        }
        return previous;
    }
};
