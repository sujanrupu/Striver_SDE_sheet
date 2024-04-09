//Link: https://leetcode.com/problems/add-two-numbers/description/

class Solution {
public:
    void insert(ListNode *&head, ListNode *&tail, int val) {
        ListNode *temp = new ListNode(val);
        if(!head) {
            head = temp;
            tail = temp;
            return ;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode *add(ListNode *l1, ListNode *l2) {
        if(!l1)  return l2;
        if(!l2)  return l1;

        ListNode *ansHead = NULL, *ansTail = NULL;
        int carry = 0;
        while(l1 && l2) {
            int sum = l1->val + l2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            insert(ansHead, ansTail, digit);
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1) {
           int sum = l1->val +  carry;
            int digit = sum % 10;
            carry = sum / 10;
            insert(ansHead, ansTail, digit);
            l1 = l1->next; 
        }
        while(l2) {
            int sum = l2->val + carry;
            int digit = sum % 10;
            carry = sum / 10;
            insert(ansHead, ansTail, digit);
            l2 = l2->next;
        }
        while(carry) {
            int sum = carry;
            int digit = sum % 10;
            carry = sum / 10;
            insert(ansHead, ansTail, digit);
        }
        return ansHead;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = add(l1, l2);
        return ans;
    }
};
