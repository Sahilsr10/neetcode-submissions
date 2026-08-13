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

    ListNode* revll(ListNode* head){
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* forward = NULL;

        while(current != NULL){
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
        return prev;
    }

    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* second = revll(slow->next);
        slow->next = NULL;

        ListNode* first = head;
        while(second!=NULL){
            ListNode* t1 = first->next;
            ListNode* t2 = second->next;

            first->next = second;
            second->next = t1;

            first = t1;
            second = t2;
        }
    }
};
