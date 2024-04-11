//Link: https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    bool isPal(string &s, int start, int end) {
        while(start <= end) {
            if(s[start]!=s[end])
                return false;
            start++;    end--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                if(isPal(s, i, j)) {
                    string temp = s.substr(i, j-i+1);
                    ans = temp.length() > ans.length() ? temp : ans;
                }
            }
        }
        return ans;
    }
};
