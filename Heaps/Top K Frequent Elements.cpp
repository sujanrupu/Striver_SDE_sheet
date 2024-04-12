//Link: https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        int count = 1, n = nums.size();
        sort(nums.begin(), nums.end());
        vector<pair<int, int>>v;
        for(int i=0; i<n-1; i++) {
            if(nums[i] == nums[i+1])    count++;
            else {
                pair<int, int>p = make_pair(nums[i], count);
                v.push_back(p);
                count = 1;
            }
        }
        pair<int, int>p = make_pair(nums[n-1], count);
        v.push_back(p);
        vector<int>ans;
        sort(v.begin(), v.end(), cmp);
        for(int i=0; i<k; i++) 
            ans.push_back(v[i].first);
        return ans;
    }
};
