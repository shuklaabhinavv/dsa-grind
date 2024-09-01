class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int a=original.size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        if(m*n!=a) return vector<vector<int>>(0, vector<int>(0));;
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans[i][j]=original[c];
                c++;
            }
        }
        return ans;
    }
};