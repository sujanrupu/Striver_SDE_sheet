//Link: https://leetcode.com/problems/search-in-a-binary-search-tree/description/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while(root && root->val != val) {
            if(root->val < val)
                root = root->right;
            else
                root = root->left;
        }
        return root;
    }
};
