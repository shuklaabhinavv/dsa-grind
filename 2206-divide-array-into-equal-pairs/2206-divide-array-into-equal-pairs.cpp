class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        unordered_map<int,int>m;
        for(auto it:nums)
        {
            m[it]++;
        }
        bool flag=true;
        for(auto x:m)
        {
            if(x.second%2!=0)
            {
                flag=false;
            }
        }
        return flag;
    }
};