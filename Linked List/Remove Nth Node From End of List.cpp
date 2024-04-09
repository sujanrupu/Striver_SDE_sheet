//Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
    int getLength(ListNode *head) {
        ListNode *curr = head;
        int length = 0;
        while(curr) {
            length++;
            curr = curr->next;
        }
        return length;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head || !head->next)
            return NULL;
        int length = getLength(head);
        int temp = (length - n) - 1;
        int track = 0;

        if(n == length)
            head = head->next;
        ListNode *curr = head;
        while(curr->next) {
            if(track == temp)
                curr->next = curr->next->next;
            else
                curr = curr->next;
            track++;
        }
        return head;
    }
};
