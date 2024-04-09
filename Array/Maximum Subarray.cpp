//Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sumMax = nums[0], sulTillNow = nums[0] < 0 ? 0 : nums[0];
        for(int i=1; i<nums.size(); i++) {
            sumMax = max(sumMax, sulTillNow+nums[i]);
            sulTillNow += nums[i];
            if(sulTillNow < 0)  sulTillNow = 0;
        }
        return sumMax;
    }
};
