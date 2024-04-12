//Link: https://www.geeksforgeeks.org/problems/maximum-sum-combination/1

class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        vector<int>ans;
        set<pair<int, int>>s;
        for(int i=0; i<N; i++) {
            for(int j=0; j<N; j++) 
                s.insert({i, j});
        }
        vector<int>arr;
        for(auto it : s)
            arr.push_back(A[it.first] + B[it.second]);
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        for(int i=0; i<K; i++)  
            ans.push_back(arr[i]);
        return ans;
    }
};
