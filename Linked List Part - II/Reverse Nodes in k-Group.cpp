//Link: https://leetcode.com/problems/reverse-nodes-in-k-group/description/

class Solution {
public:
    int getLength(ListNode *head) {
        int length = 0;
        ListNode *curr = head;
        while(curr) {
            length++;
            curr = curr->next;
        }
        return length;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int length = getLength(head);
        if(k > length || !head || !head->next)  return head;
        ListNode *curr = head, *prev = NULL, *fwd = NULL;
        int count = 0;
        while(curr && count < k) {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            count++;
        }
        if(fwd) 
            head->next = reverseKGroup(fwd, k);
        return prev;
    }
};
