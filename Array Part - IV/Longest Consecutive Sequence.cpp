// Link: https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;
        vector<int>nums1;
        for(auto it : nums)
            s.insert(it);
        for(auto it : s)
            nums1.push_back(it);
        int n = nums1.size(), ans = 1, res = 1;
        if(n == 0)  return 0;
        sort(nums1.begin(), nums1.end());
        for(int i=0; i<n-1; i++) {
            if(nums1[i+1]-nums1[i] == 1)
                ans++;
            else {
                res = max(res, ans);
                ans = 1;
            }
        }
        res = max(res, ans);
        return res;
    }
};
