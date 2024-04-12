//Link: https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            if(i == nums.size() - k)
                return nums[i];
        }
        return -1;
    }
};
