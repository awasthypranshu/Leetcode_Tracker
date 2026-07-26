// Last updated: 26/07/2026, 22:05:34
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
    ListNode* sortList(ListNode* head) {
        vector<int> ls;
        ListNode* temp = head;
        while(temp != NULL){
            ls.push_back(temp->val);
            temp = temp->next;
        }
        sort(ls.begin(),ls.end());
        int i = 0;
        temp = head;
        while(i < ls.size()){
            if (head == NULL) return NULL;
            temp->val = ls[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};