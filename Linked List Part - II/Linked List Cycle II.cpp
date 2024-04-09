//Link: https://leetcode.com/problems/linked-list-cycle-ii/description/

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        while(fast) {
            fast = fast->next;
            if(slow && fast) {
                slow = slow->next;
                fast = fast->next;
            }
            if(slow == fast)
                break;
        }
        if(!fast)
            return NULL;
        slow = head;
        while(slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
