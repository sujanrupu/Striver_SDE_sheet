//link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

class Solution {
public:
    void inOrder(TreeNode* root, vector<int>& ans) {
        if(!root)
            return ;
        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        inOrder(root, ans);
        int n = ans.size();
        for(int i=0; i<n; i++) {
            if(i+1 == k)
                return ans[i];
        }
        return -1;
    }
};
