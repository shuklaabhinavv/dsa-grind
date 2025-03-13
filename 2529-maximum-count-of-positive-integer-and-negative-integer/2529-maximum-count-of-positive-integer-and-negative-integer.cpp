class Solution {
public:
    int possearch(vector<int>nums,int s,int e)
    {
        int ans=nums.size();
        while(s<e)
        {
            int m=(s+e)/2;
            if(nums[m]>0)
            {
                ans=m;
                e=m-1;
            }
            else
            {
                s=m+1;
            }
        }
        return ans;
    }
    int negsearch(vector<int>nums,int s,int e)
    {
        int ans=-1;
        while(s<e)
        {
            int m=(s+e)/2;
            if(nums[m]<0)
            {
                ans=m;
                s=m+1;
            }
            else
            {
                e=m-1;
            }
        }
        return ans;
    }
    int maximumCount(vector<int>& nums) 
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int a=n-possearch(nums,s,e)+1;
        int b=negsearch(nums,s,e)+1;
        return max(a,b);
    }
};