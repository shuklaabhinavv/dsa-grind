class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l,r;
        set<vector<int>>s;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            l=i+1;
            r=n-1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            while(l<r)
            {
                if((nums[i]+nums[l]+nums[r])==0)
                {
                    s.insert({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                }
                else if((nums[i]+nums[l]+nums[r])>0)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
        for(auto it : s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};