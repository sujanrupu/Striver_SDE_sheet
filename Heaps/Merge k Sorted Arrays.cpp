//Link: https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        int n = arr.size(), m = arr[0].size();
        vector<int>ans;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++)
                ans.push_back(arr[i][j]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
