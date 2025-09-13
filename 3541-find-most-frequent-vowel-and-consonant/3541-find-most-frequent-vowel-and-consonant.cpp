class Solution {
public:
    int maxFreqSum(string s) 
    {
        unordered_map<char,int>v;
        unordered_map<char,int>c;
        for(auto x:s)
        {
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
            {
                v[x]++;
            }
            else
            {
                c[x]++;
            }
        }
        int maxv=0;
        int maxc=0;
        for(auto x:v)
        {
            maxv=max(maxv,x.second);
        }
        for(auto x:c)
        {
            maxc=max(maxc,x.second);
        }
        return maxv+maxc;
    }
};