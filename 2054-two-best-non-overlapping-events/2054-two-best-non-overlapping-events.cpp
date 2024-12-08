class Solution {
public:
    int BiS(vector<vector<int>>& events,int end,int n)
    {
        int l=0;
        int r=n-1;
        int res=n;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(events[m][0]>end)
            {
                res=m;
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return res;
    }
    int solve(vector<vector<int>>& events,int i,int count,int n,vector<vector<int>>& dp)
    {
        if(count == 2 || i>=n)
        {
            return 0;
        }
        if(dp[i][count]!=-1)
        {
            return dp[i][count];
        }
        int next=BiS(events,events[i][1],n);
        int take=events[i][2]+solve(events,next,count+1,n,dp);
        int nottake=solve(events,i+1,count,n,dp);
        return dp[i][count]=max(take,nottake);
    }
    int maxTwoEvents(vector<vector<int>>& events) 
    {
        int n=events.size();
        vector<vector<int>> dp(n+1,vector<int>(3,-1));
        sort(events.begin(),events.end());
        return solve(events,0,0,n,dp);
    }
};