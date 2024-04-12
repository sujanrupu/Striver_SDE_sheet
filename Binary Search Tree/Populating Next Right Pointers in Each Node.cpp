//Link: https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/

class Solution {
public:
    void solve(Node *l , Node *r) {
        if(l == NULL || r == NULL)  return ;

        l->next = r;
        r->next = NULL;

        solve(l->left, l->right);
        solve(l->right, r->left);
        solve(r->left, r->right);
    }

    Node* connect(Node* root) {
        if(root == NULL)    return NULL;
        if(root->left == NULL)  return root;

        solve(root->left, root->right);
        return root;
    }
};
