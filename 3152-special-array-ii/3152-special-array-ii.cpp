class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        int n=nums.size();
        int m=queries.size();
        vector<bool> res;
        vector<int>conver(1,0);
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]%2==nums[i-1]%2)
            {
                j++;
            }
            conver.push_back(j);
        }
        for(auto q:queries)
        {
            if(conver[q[0]]==conver[q[1]])
            {
                res.push_back(true);
            }
            else
            {
                res.push_back(false);
            }
        }
        return res;
    }
};