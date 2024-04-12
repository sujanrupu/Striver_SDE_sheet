//Link: https://www.geeksforgeeks.org/problems/floor-in-bst/1

class Solution{
public:
    void inOrder(Node *root, vector<int>& ans) {
        if(!root)   return ;
        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }

    int floor(Node* root, int x) {
        vector<int>ans;
        inOrder(root, ans);
        if(x < ans[0])
            return -1;
        if(x >= ans[ans.size()-1])
            return ans[ans.size()-1];
        for(int i=0; i<ans.size()-1; i++) {
            if(ans[i] <= x && ans[i+1] > x)
                return ans[i];
        }
        return -1;
    }
};
