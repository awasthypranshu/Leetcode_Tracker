// Last updated: 26/07/2026, 22:05:04
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* temp2 = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;
        while(curr != NULL){
            ListNode* next = curr->next;
            if(count%2 == 1){
                if(newHead == NULL){
                    newHead = curr;
                    temp2 = newHead;
                    prev->next = next; 
                }else{
                    temp2->next = curr;
                    prev->next = next;
                    temp2 = curr;
                }
            }else{
                prev = curr;
            }
            curr = next;
            count++;
        }
        if(prev != NULL)
            prev->next = newHead;

        if(temp2 != NULL)
            temp2->next = NULL;  
        return head;
    }
};