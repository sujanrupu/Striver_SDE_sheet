//Link: https://www.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1

class Solution
{
    public:
    int findPos(int arr[], int start, int end, int element) {
        for(int i=start; i<=end; i++) {
            if(arr[i] == element)
                return i;
        }
        return -1;
    }
    
    Node *solve(int in[], int pre[], int start, int end, int n, int &i) {
        if(i< 0 || start > end) {
            return NULL;
        }
        int element = pre[i--];
        Node *root = new Node(element);
        int ind = findPos(in, start, end, element);
        root->right = solve(in, pre, ind+1, end, n, i);
        root->left = solve(in, pre, start, ind-1, n, i);
        return root;
    }
    
    Node *buildTree(int in[], int post[], int n) {
        int index = n-1;
        Node *ans = solve(in, post, 0, n-1, n, index);
        return ans;
    }
};
