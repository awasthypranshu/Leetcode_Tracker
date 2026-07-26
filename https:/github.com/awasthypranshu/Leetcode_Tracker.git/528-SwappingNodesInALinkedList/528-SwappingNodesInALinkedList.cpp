// Last updated: 26/07/2026, 22:04:47
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
    int length(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int n = length(head);
        ListNode* second = NULL;
        ListNode* temp = head;
        for(int i = 0; i < n-k; i++){
            temp = temp->next;
        }
        second = temp;
        temp = head;
        ListNode* first = NULL;
        for(int i = 1; i < k; i++){
            temp = temp->next;
        }
        first = temp;
        int num = second->val;
        second->val = first->val;
        first->val = num;
        return head;
    }
};