//Link: https://leetcode.com/problems/merge-sorted-array/description/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans;
        for(int i=0; i<m; i++) {
            if(nums1[i]!=0)
                ans.push_back(nums1[i]);
        }
        if(n == 0) {
            sort(ans.begin(), ans.end());
            return ;
        }
        else {
            for(int i=0; i<nums2.size(); i++) {
                if(nums2[i]!=0)
                    ans.push_back(nums2[i]);
            }   
        }
        
        for(int i=0; i<ans.size(); i++) {
            nums1[i] = ans[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};
