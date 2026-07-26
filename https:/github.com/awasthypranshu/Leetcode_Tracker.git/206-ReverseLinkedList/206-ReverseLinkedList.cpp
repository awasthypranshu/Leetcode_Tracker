// Last updated: 26/07/2026, 22:05:19
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
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head->next;
        ListNode* prev = head;
        head->next = NULL;
        while(temp != NULL){
            ListNode* forward = temp->next;
            temp->next = prev;
            prev = temp;
            temp = forward;
        }
        head = prev;
        return head;
    }
};