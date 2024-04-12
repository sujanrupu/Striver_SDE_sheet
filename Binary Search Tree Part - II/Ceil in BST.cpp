//Link: https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1

    void inOrder(Node *root, vector<int>& ans) {
        if(!root)   return ;
        inOrder(root->left, ans);
        ans.push_back(root->data);
        inOrder(root->right, ans);
    }

int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    vector<int>ans;
    inOrder(root, ans);
    if(input <= ans[0]) return ans[0];
    if(input > ans[ans.size()-1])   return -1;
    for(int i=0; i<ans.size()-1; i++) {
        if(ans[i]<input && ans[i+1]>=input)
            return ans[i+1];
    }
    return -1;
    
}
