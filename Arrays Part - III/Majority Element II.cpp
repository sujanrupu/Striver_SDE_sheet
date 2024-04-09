//Link: https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 1;
        vector<int>ans;
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1])    count++;
            else {
                if(count > (n/3))   ans.push_back(nums[i]);
                count = 1;
            }
        }
        if(count > (n/3))   ans.push_back(nums[n-1]);
        return ans;
    }
};
