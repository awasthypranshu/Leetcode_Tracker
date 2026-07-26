// Last updated: 26/07/2026, 22:05:28
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
    int getDifference(ListNode *headA, ListNode *headB){
        ListNode* temp = headA;
        int a = 0,b = 0;
        while(temp != NULL){
            temp = temp->next;
            a++;
        }
        temp = headB;
        while(temp != NULL){
            temp = temp->next;
            b++;
        }
        return a-b;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int num = getDifference(headA,headB);
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        if(num > 0){
            while(num > 0){
                temp1 = temp1->next;
                num--;
            }
        }
        else if(num < 0){
            while(num < 0){
                temp2 = temp2->next;
                num++;
            }
        }
        while(temp1 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};