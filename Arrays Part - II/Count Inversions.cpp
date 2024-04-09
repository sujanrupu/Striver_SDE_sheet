//Link: https://www.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

class Solution{
  public:
    long long int inversionCount(long long arr[], long long N)
    {
        long long count = 0;
        for(int i=0; i<N; i++)
        {
            for(int j=i+1; j<N; j++)
            {
                if(arr[j] < arr[i]) count += 1;
            }
        }
        return count;
    }

};
