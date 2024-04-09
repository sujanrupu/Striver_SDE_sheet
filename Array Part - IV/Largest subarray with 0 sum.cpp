//Link: https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        vector <int> ans;
        int sum = 0, count = 0;
        
        for(int i=0; i<n; i++) {
            for(int j=i; j<n; j++) {
                sum += A[j];
                count++;
                if(sum == 0) {
                    ans.push_back(count);
                }
            }
            sum = 0;
            count = 0;
        }
        
        sort(ans.begin(), ans.end());
        int N = ans.size();
        if(N == 0)  return 0;
        else    return ans[N-1];
    }
};
