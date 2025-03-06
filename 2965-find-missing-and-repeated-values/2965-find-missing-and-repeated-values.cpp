class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        vector<int>m(((n*n)+1),-1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                m[grid[i][j]]++;
            }
        }
        vector<int>ans;
        int a=-1;
        int b=-1;
        int ms=m.size();
        for(int i=1;i<ms;i++)
        {
            if(m[i]==1)
            {
                a=i;
            }
            if(m[i]==-1)
            {
                b=i;
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};