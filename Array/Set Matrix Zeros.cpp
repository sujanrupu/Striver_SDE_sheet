//Link: https://leetcode.com/problems/set-matrix-zeroes/description/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int>row, col;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 0) {
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i=0; i<row.size(); i++) {
            for(int j=0; j<m; j++) {
                matrix[row[i]][j] = 0;
            }
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<col.size(); j++) {
                matrix[i][col[j]] = 0;
            }
        }
    }
};
