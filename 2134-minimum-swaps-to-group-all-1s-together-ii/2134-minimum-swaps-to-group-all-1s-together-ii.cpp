class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int c1=0;
        for(auto x : nums){
            if(x==1) c1++;
        }
        if(c1==0||c1==n)
        {
            return 0;
        }
        int c0=0;
        for (int i=0;i<c1;i++)
        {
            if(nums[i]==0) c0++;
        }
        int mini=c0;
        for(int i = 1; i < n; i++) 
        {
            if(nums[i - 1] == 0) c0--;
            if(nums[(i + c1 - 1) % n] == 0) c0++;
            mini=min(mini,c0);
        }
    return mini;
    }
};