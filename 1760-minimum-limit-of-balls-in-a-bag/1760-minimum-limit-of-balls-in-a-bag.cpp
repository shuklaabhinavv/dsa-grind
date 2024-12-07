class Solution {
public:
    bool isPossible(int m,int op,vector<int>& nums)
    {
        int tot=0;
        for(int i:nums)
        {
            int ope=i/m;
            if(i%m==0)
            {
                ope--;
            }
            tot+=ope;
        }
        if(tot>op)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    int minimumSize(vector<int>& nums, int maxOperations) 
    {
        int l=1;
        int r=INT_MIN;
        for(int n:nums)
        {
            r=max(r,n);
        }
        int res=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isPossible(mid,maxOperations,nums))
            {
                res=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return res;
    }
};