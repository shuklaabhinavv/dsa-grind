class Solution {
public:
    int maxi(vector<int>&gifts,int n)
    {
        int res=0;
        for(int i=1;i<n;i++)
        {
            if(gifts[i]>gifts[res])
            {
                res=i;
            }
        }
        return res;
    }
    long long pickGifts(vector<int>& gifts, int k) 
    {
        int n=gifts.size();
        int i=0;
        while(k>0)
        {
            i=maxi(gifts,n);
            int sq=gifts[i];
            gifts[i]=floor(sqrt(gifts[i]));
            k--;
        }
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            sum+=gifts[i];
        }
        return sum;
    }
};