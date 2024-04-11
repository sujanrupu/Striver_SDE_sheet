//Link: https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans = "";
        string a = strs[0], b = strs[strs.size()-1];
        int n = a.length();
        for(int i=0; i<n; i++) {
            if(a[i] == b[i])
                ans.push_back(a[i]);
            else
                return ans;
        }
        return ans;
    }
};
