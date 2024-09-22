class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        map<int,int>m;
        vector<int>ans;
        for(auto x:nums)
        {
            m[x]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(m[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};