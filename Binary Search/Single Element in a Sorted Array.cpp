//Link: https://leetcode.com/problems/single-element-in-a-sorted-array/description/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size(), count = 1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1]) 
                count++;
            else {
                if(count == 1)  return nums[i];
                count = 1;
            }
        }
        return nums[n-1];
    }
};
