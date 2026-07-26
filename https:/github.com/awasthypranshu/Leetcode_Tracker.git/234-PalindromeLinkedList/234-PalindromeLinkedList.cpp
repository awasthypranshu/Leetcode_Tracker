// Last updated: 26/07/2026, 22:05:15
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
    bool isPalindrome(ListNode* head) {
        vector<int>List;
        ListNode* temp = head;
        while(temp != NULL){
            List.push_back(temp->val);
            temp = temp->next; 
        }
        int left = 0;
        int right = List.size()-1;
        while(left <= right){
            if(List[left] != List[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};