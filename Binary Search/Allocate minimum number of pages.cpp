//Link: https://www.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution 
{
    public:
    bool isPossible(int arr[], int n, int m, int ans) {
        int count = 1, totalPage = 0;
        for(int i=0; i<n; i++) {
            if(arr[i] > ans)
                return false;
            else if(totalPage + arr[i] > ans) {
                count++;
                totalPage = arr[i];
                if(count > m)
                    return false;
            }
            else
                totalPage += arr[i];
        }
        return true;
    }
    
    int findPages(int A[], int N, int M) 
    {
        if(M > N)   return -1;
        int start = 0, end = 0;
        for(int i=0; i<N; i++)
            end += A[i];
        int ans = -1;
        while(start <= end) {
            int mid = start + (end - start)/2;
            if(isPossible(A, N, M, mid)) {
                ans = mid;
                end = mid-1;
            }
            else    
                start = mid+1;
        }
        return ans;
    }
};
