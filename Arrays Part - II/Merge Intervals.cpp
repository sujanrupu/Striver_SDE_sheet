//Link: https://leetcode.com/problems/merge-intervals/submissions/1227518879/

class Solution {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.first < b.first;
    }

    vector<vector<int>> merge(vector<vector<int>>& it) {
        vector<vector<int>>ans;
        vector<pair<int, int>>v;
        for(int i=0; i<it.size(); i++)
            v.push_back({it[i][0], it[i][1]});
        sort(v.begin(), v.end(), cmp);
        int ansStart = v[0].first, ansEnd = v[0].second;
        for(int i=1; i<v.size(); i++) {
            if(v[i].first > ansEnd) {
                ans.push_back({ansStart, ansEnd});
                ansStart = v[i].first;
            }
            ansEnd = max(ansEnd, v[i].second);
        }
        ans.push_back({ansStart, ansEnd});
        return ans;
    }
};
