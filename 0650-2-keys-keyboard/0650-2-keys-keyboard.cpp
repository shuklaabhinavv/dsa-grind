class Solution {
public:
    int findways(int num, int i, int tar, vector<vector<int>> &dp) 
    {
        if (num == tar) 
        {
            return 0;
        }
        if (num + i> tar) 
        {
            return 2000;
        }
        if (dp[num][i] != -1) 
        {
            return dp[num][i];
        }
        int cp = 2 + findways(num + num, num, tar, dp);
        int p = 1 + findways(num + i,i, tar, dp);

        return dp[num][i] = min(cp, p);
    }
    int minSteps(int n) 
    {
        if (n == 1)
        {
            return 0;
        }
        vector<vector<int>> dp(n + 1, vector<int>(n, -1));
        return findways(2, 1, n, dp) + 2;
    }
};