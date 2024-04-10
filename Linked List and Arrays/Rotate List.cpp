//Link: https://leetcode.com/problems/rotate-list/description/

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

    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)   
            return NULL;
        int length = getLength(head);
        int rotate = k % length;
        if(rotate == 0)
            return head;
        int newLastNodePos = length - rotate - 1;
        ListNode *newLastNode = head;
        for(int i=0; i<newLastNodePos; i++)
            newLastNode = newLastNode->next;
        ListNode *newHead = newLastNode->next;
        newLastNode->next = NULL;
        ListNode *it = newHead;
        while(it->next) 
            it = it->next;
        it->next = head;
        return newHead;
    }
};
