//Link: https://leetcode.com/problems/reverse-linked-list/description/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)   return NULL;
        ListNode *curr = head;
        ListNode *prev = NULL, *fwd = NULL;
        while(curr) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
};
