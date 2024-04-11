//Link: https://www.geeksforgeeks.org/problems/construct-tree-1/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
    public:
    int findPos(int arr[], int start, int end, int element) {
        for(int i=start; i<=end; i++) {
            if(arr[i] == element)
                return i;
        }
        return -1;
    }
    
    Node *solve(int in[], int pre[], int start, int end, int n, int &i) {
        if(i >= n || start > end) {
            return NULL;
        }
        int element = pre[i++];
        Node *root = new Node(element);
        int ind = findPos(in, start, end, element);
        root->left = solve(in, pre, start, ind-1, n, i);
        root->right = solve(in, pre, ind+1, end, n, i);
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int index = 0;
        Node *ans = solve(in, pre, 0, n-1, n, index);
        return ans;
    }
};
