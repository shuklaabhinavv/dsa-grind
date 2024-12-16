class Solution {
public:
    int mini(vector<int>& nums)
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<nums[ans])
            {
                ans=i;
            }
        }
        return ans;
    }
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        while(k>0)
        {
            int ch=mini(nums);
            nums[ch]*=multiplier;
            k--;
        }
        return nums;
    }
};