//Link: https://leetcode.com/problems/reverse-pairs/description/

class Solution {
public:
    int reversePairs(vector<int>& nums) {
        long long n = nums.size();

        long long count = 0;

        for(long long i=0; i<(n-1); i++) {
            for(long long j=i+1; j<n; j++) {
                if(nums[i] > (2LL*(nums[j])))   count++;
            }
        }

        return (int)count;
    }
};
