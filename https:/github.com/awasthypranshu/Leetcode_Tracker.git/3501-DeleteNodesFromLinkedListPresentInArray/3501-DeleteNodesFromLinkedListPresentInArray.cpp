// Last updated: 26/07/2026, 22:03:23
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if (head == nullptr) return nullptr;
        if (nums.size() == 0) return head;

        map<int,int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            ListNode* nextNode = temp->next;

            if (mpp.find(temp->val) != mpp.end()) {
                if (temp == head) {
                    head = nextNode;
                    temp = nextNode;   
                    continue;
                }

                prev->next = temp->next;
                temp = nextNode;      
                continue;
            }

            prev = temp;
            temp = temp->next;
        }

        return head;
    }
};