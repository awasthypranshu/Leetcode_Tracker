// Last updated: 26/07/2026, 22:06:29
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while(temp1 != NULL && temp2 != NULL){
            int sum = temp1->val + temp2->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum % 10;
                temp1->val = sum;
                temp2->val = sum;
            } else {
                temp1->val = sum;
                temp2->val = sum;
                carry = 0;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if (temp1 != NULL) {
            ListNode* end = l2;
            while (end->next != NULL) end = end->next;
            end->next = temp1;
            temp2 = temp1;
            temp1 = NULL;    
        }

        while(temp1 != NULL){
            int sum = temp1->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum % 10;
                temp1->val = sum;
            } else {
                temp1->val = sum;
                carry = 0;
            }
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            int sum = temp2->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum % 10;
                temp2->val = sum;
            } else {
                temp2->val = sum;
                carry = 0;
            }
            temp2 = temp2->next;
        }

        if(carry == 1){
            ListNode* end = l2;
            while(end->next != NULL) end = end->next;
            end->next = new ListNode(1);
        }

        return l2;
    }
};
