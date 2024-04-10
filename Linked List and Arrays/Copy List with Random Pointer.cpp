//Link: https://leetcode.com/problems/copy-list-with-random-pointer/description/

class Solution {
public:
    Node* solve(Node *head, unordered_map<Node*, Node*>& mp) {
        if(!head)   return NULL;
        Node *newHead = new Node(head->val);
        mp[head] = newHead;
        newHead->next = solve(head->next, mp);
        if(head->random)
            newHead->random = mp[head->random];
        return newHead;
    }

    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*>mp;
        return solve(head, mp);
    }
};
