//Link: https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>ans;
        int miss = -1, repeat = -1;
        sort(arr.begin(), arr.end());
        if(arr[0] > 1)
            miss = 1;
        for(int i=0; i<n-1; i++) {
            if(arr[i] == arr[i+1]) {
                repeat = arr[i+1];
            }
            else if((arr[i+1] - arr[i]) == 2) 
                miss = arr[i] + 1;
        }
        if(miss == -1)
            miss = arr[n-1] + 1;
        ans.push_back(repeat);
        ans.push_back(miss);
        
        return ans;
    }
};
