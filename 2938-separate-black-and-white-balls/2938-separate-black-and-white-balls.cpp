class Solution {
public:
    long long minimumSteps(string s) 
    {
        int pos=0;
        long long ans=0;
        for(int curr=0;curr<s.size();curr++)
        {
            if(s[curr]=='0')
            {
                ans+=(curr-pos);
                pos++;
            }
        }
        return ans;
    }
};