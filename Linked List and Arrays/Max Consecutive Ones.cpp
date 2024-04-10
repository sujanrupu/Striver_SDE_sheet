//Link: https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), count = 1, ans = 0, zero = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0)
                zero++;
        }
        if(zero == n)       return 0;
        for(int i=0; i<n-1; i++) {
            if(nums[i] == 1 && nums[i+1] == 1)
                count++;
            else {
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};
