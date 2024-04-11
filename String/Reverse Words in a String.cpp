//Link: https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    bool isChar(char ch) {
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z' || ch>='0' && ch<='9')
            return true;
        else
            return false;
    }

    string reverseWords(string s) {
        string temp = "", ans = "", space = "";
        for(int i=s.length()-1; i>=0; i--) {
            if(!isChar(s[i]) && temp.length()>0) {
                reverse(temp.begin(), temp.end());
                ans += temp;
                ans.push_back(' ');
                temp = "";
            }
            else if(isChar(s[i]))
                temp.push_back(s[i]);
            else 
                space.push_back(s[i]);
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        string ans1 = "";
        for(int i=ans.length()-1; i>=0; i--) {
            if(isChar(ans[i]) || (!isChar(ans[i]) && ans1.length()>0))
                ans1.push_back(ans[i]);
        }
        reverse(ans1.begin(), ans1.end());
        ans = ans1;
        return ans;
    }
};
