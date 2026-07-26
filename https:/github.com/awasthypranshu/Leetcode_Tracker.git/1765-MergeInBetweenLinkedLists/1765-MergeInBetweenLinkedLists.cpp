// Last updated: 26/07/2026, 22:03:55
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* prev = NULL;
        ListNode* hold = NULL;
        int count = 0;
        while(count < a-1){
            temp = temp->next;
            count++;
        }
        prev = temp;
        while(count < b){
            temp = temp->next;
            count++;
        }
        hold = temp->next;
        prev->next = list2;
        temp = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = hold;
        return list1;
    }
};