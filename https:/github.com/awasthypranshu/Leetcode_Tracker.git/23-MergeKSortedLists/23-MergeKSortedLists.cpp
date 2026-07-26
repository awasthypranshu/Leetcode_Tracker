// Last updated: 26/07/2026, 22:06:11
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        int lc = 0;
        ListNode* left = lists[0];
        while(lc < lists.size()-1){
            ListNode* prev = NULL;
            ListNode* right = lists[lc+1];
            if(left == NULL){ 
                lists[0] = right; lc++; left = lists[0]; continue; 
            }
            while(left != NULL && right != NULL){
                if(left->val > right->val){
                    ListNode* rightNext = right->next;  
                    if(prev == NULL){
                        right->next = left;
                        lists[0] = right;
                        prev = right;
                        right= rightNext;
                    }else{
                        right->next = left;
                        prev->next = right;
                        prev = right;
                        right = rightNext;
                    }
                }else{
                    prev = left;
                    left = left->next;
                }
                if(left == NULL){
                    prev->next = right;
                    break;
                }
            }
                lc++;
                left = lists[0];
        }
        return lists[0];
    }
};