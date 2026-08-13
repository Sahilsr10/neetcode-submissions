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

    ListNode* reverseLinkedList(ListNode* head){
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
        // if head is empty or have only 1 element , no reorder!
        if(head == NULL || head->next == NULL) return;

        // find middle element  - [1,2,3,4,5] -> '3'
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        // split list
        ListNode* second = slow->next;   // slow = 3, slow->next = [4,5,null]
        slow->next = NULL; // [1,2,3,null]

        // reverse second half 
        second = reverseLinkedList(second);  // [5,4,null] reversed

        // merge
        ListNode* first = head;  // first = 1,2,3,..

        while(second != NULL){
            ListNode* t1 = first->next;    // 1,2 t1 = 2
            ListNode* t2 = second->next;   // 5,4 t2 = 4

            first->next = second;          // 1,5
            second->next = t1;             // 1,5,2

            first = t1;                    // 1,5,2,4
            second = t2;                   // 1,5,2,4,3
        }
    }
};
