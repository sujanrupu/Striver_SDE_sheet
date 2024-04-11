//Link: https://leetcode.com/problems/repeated-string-match/description/

class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        if(a == b)  return 1;
        int ans = 0;
        string str = a;
        while(a.length() <= 10000) {
            ans++;
            int ind = a.find(b);
            if(ind != -1)   return ans;
            a += str;
        }
        return -1;
    }
};
