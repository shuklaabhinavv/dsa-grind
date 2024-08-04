class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) 
    {
        vector<int>sum(n*(n+1)/2+1,0);
        int calc=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            calc=0;
            for(int j=i;j<n;j++)
            {
                calc+=nums[j];
                sum[k]=calc;
                k++;
            }
        }
        sort(sum.begin(),sum.end());
        int cal=0;
        int mod=1e9+7;
        for(int i=left;i<right+1;++i)
        {
            cal=(cal+sum[i])%mod;
        }
        return cal;
    }
};