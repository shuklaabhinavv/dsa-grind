class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        int maxi=INT_MIN;
        int pro=0;
        int buy=prices[0];
        for(int i=0;i<n;i++)
        {
            buy=min(buy,prices[i]);
            pro=prices[i]-buy;
            maxi=max(pro,maxi);
        }
        return maxi;
    }
};