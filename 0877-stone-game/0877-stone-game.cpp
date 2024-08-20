class Solution {
public:
    int findways(vector<int>& piles,vector<vector<int>>& dp,int i,int j)
    {
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int s=piles[i]+min(findways(piles,dp,i+2,j),findways(piles,dp,i+1,j-1));
        int e=piles[j]+min(findways(piles,dp,i+1,j-1),findways(piles,dp,i,j-2));
        return dp[i][j]=max(s,e);
    }
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int alice=findways(piles,dp,0,n-1);
        int sum=0;
        for(auto x : piles)
        {
            sum+=x;
        }
        int bob=sum-alice;
        return alice>bob;
    }
};