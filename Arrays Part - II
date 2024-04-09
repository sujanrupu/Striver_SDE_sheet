//Link: https://leetcode.com/problems/rotate-image/description/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>>ans;
        for(int j=0; j<m; j++) {
            vector<int>temp;
            for(int i=n-1; i>=0; i--) {
                temp.push_back(matrix[i][j]);
            }
            ans.push_back(temp);
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                matrix[i][j] = ans[i][j];
            }
        }
    }
};
