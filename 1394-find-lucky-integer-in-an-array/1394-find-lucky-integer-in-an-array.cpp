class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int,int>m;
        for(auto i:arr)
        {
            m[i]++;
        }
        int ans=-1;
        for(auto x:m)
        {
            if(x.first==x.second)
            {
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};