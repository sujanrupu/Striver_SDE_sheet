//Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, n = s.length(), ans = 0;
        map<char, int>mp;
        while(j < n) {
            mp[s[j]]++;
            while(mp[s[j]] > 1) {
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};
