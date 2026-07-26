// Last updated: 26/07/2026, 22:06:16
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n == 1) return NULL;
        ListNode* front = head;
        ListNode* back = head;
        for(int i=0; i<n; i++){
            front = front->next;
        }
        if (front == NULL)
            return head->next;
        ListNode* prev = NULL;
        while(front != NULL){
            front = front->next;
            prev = back;
            back = back->next;
        }
        prev->next = back->next;
        return head;
    }
};