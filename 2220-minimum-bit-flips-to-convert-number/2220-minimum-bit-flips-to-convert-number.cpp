class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int ans=0;
        int l,r;
        while(start>0||goal>0)
        {
            l=start%2;
            r=goal%2;
            if(l!=r)
            {
                ans++;
            }
            start/=2;
            goal/=2;
        }
        return ans;
    }
};