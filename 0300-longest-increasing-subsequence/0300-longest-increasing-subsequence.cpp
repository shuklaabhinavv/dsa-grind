class Solution {
public:
    int find(vector<int> &nums,int i,int prev,vector<vector<int>> &dp,int n)
    {
        if(i==0)
        {
            if(prev==n||(prev!=n&&nums[0]<nums[prev]))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        if(dp[i][prev]!=-1) return dp[i][prev];
        int nottake=find(nums,i-1,prev,dp,n);
        int take=0;
        if(prev==n||(prev!=n&&nums[i]<nums[prev]))
        {
            take=1+find(nums,i-1,i,dp,n);
        }
        return dp[i][prev]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int> (n+1,-1));
        int ans = find(nums,n-1,n,dp,n);
        if(ans!=0)return ans;
        return 1;
    }
};