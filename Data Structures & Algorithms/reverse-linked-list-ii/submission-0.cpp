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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right) return head;

        // create dummy that points to head 1st
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // move to node just before left part
        ListNode* prev = dummy;
        for(int i = 1; i<left; i++){
            prev = prev->next;
        }

        // isolate the middle part
        ListNode* start = prev->next;
        ListNode* end = start;

        for(int i = left; i<right; i++){
            end = end->next;
        }

        ListNode* after = end->next;

        // cut the middle part
        end->next = NULL;

        // reverse the middle
        ListNode* reversed  = revll(start);

        // reconnect
        prev->next = reversed;
        start->next = after;

        return dummy->next;
    }
};