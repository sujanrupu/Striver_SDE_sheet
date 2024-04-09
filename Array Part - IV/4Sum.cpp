//Link: https://leetcode.com/problems/4sum/description/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set <vector <int> > s;
        vector <vector <int> > ans;

        int n = nums.size();
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                for(int k = j+1; k<n; k++) {
                    for(int l = k+1; l<n; l++) {
                        int sum = nums[i] + nums[j] + nums[k] + nums[l];
                        if(sum == target) {
                            s.insert({nums[i], nums[j], nums[k], nums[l]});
                        }
                    }
                }
            }
        }

        for(auto tripets : s)   ans.push_back(tripets);
        return ans;
    }
};
