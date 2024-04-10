//Link: https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution
{
    public:
    static bool cmp(pair<double, Item>& a, pair<double, Item>& b) {
        return a.first > b.first;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double, Item>>v;
        for(int i=0; i<n; i++) {
            double perUnitValue = (1.0 * arr[i].value)/arr[i].weight;
            pair<double, Item>p = make_pair(perUnitValue, arr[i]);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), cmp);
        double totalValue = 0;
        for(int i=0; i<n; i++) {
            if(v[i].second.weight < W) {
                totalValue += v[i].second.value;
                W -= v[i].second.weight;
            }
            else {
                totalValue += (W * v[i].first);
                W = 0;
            }
        }
        return totalValue;
    }
        
};
