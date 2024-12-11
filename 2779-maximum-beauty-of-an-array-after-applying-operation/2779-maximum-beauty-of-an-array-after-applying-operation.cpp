class Solution 
{
public:
    int maximumBeauty(vector<int>& nums, int k) 
    {
        sort(nums.begin(),nums.end());
        int i=0,j=0;
        int n=nums.size();
        int lim=2*k;
        int res=0;
        while(j<n)
        {
            if(nums[j]-nums[i]<=lim)
            {
                res++;
            }
            else
            {
                i++;
            }
            j++;
        }
        return res;
    }
};