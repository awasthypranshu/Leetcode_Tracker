// Last updated: 26/07/2026, 22:05:35
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
    ListNode* midRight(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* revLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;
        ListNode* mid = midRight(head);
        ListNode* rightHead = revLL(mid->next);
        mid->next = NULL; 
        
        ListNode* l1 = head;
        ListNode* l2 = rightHead;
        while(l2 != NULL && l1 != NULL){
            ListNode* node = l2;
            ListNode* next = l1->next;
            l2 = l2->next;
            l1->next = node;
            node->next = next;
            l1 = next;
        }
        if(l1 != NULL){
            l1->next = l2;
        }
    }
};