//Link: https://www.geeksforgeeks.org/problems/aggressive-cows/0

class Solution {
public:

    bool isPossible(vector<int>& stalls, int n, int k, int ans) {
        int pos = stalls[0], count = 1;
        for(int i=1; i<stalls.size(); i++) {
            if(stalls[i] - pos >= ans) {
                pos = stalls[i];
                count++;
                if(count >= k)  
                    return true;
            }
        }
        return false;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        sort(stalls.begin(), stalls.end());
        int start = 0, end = stalls[n-1] - stalls[0], ans = -1;
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(isPossible(stalls, n, k, mid)) {
                ans = mid;
                start = mid+1;
            }
            else
                end = mid-1;
        }
        return ans;
    }
};
