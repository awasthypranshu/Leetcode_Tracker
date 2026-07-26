// Last updated: 26/07/2026, 22:03:28
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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int sum = 0;
        ListNode* prev = head;
        while(temp != NULL){
            if(temp->val == 0){
                prev->next->val = sum;
                prev = prev->next;
                sum = 0;
                temp = temp->next;
            }else{
                sum = sum + temp->val;
                temp = temp->next;
            }
        }
        prev->next = NULL;
        return head->next;
    }
};