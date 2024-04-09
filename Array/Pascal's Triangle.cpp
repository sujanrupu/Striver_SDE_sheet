//Link: https://leetcode.com/problems/pascals-triangle/description/

class Solution {
private:
    vector <int> generateRow(int n) {
        vector <int> ans;
        ans.push_back(1);

        long long result = 1;

        for(int i=0; i<n; i++) {
            result = result * (n-i);
            result = result/(i+1);
            ans.push_back(result);
        }

        return ans;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector <vector <int> > ans;

        for(int i=0; i<numRows; i++) {
            ans.push_back(generateRow(i));
        }

        return ans;
    }
};
