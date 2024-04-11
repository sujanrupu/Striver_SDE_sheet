//Link: https://leetcode.com/problems/flatten-binary-tree-to-linked-list/description/

class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root)   return ;
        TreeNode *curr = root;
        while(curr) {
            if(curr->left) {
                TreeNode *pred = curr->left;
                while(pred->right) pred = pred->right;
                pred->right = curr->right;
                curr->right = curr->left;
            }
            curr = curr->right;
        }
        curr = root;
        while(curr) {
            curr->left = NULL;
            curr = curr->right;
        }
    }
};
