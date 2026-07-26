// Last updated: 26/07/2026, 22:05:37
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        int pos = -1;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                slow = head;
                pos = 0;
                while(slow != fast){
                    slow = slow->next;
                    fast = fast->next;
                    pos++;
                }
                return slow;
            }
        }
        return NULL;
    }
};