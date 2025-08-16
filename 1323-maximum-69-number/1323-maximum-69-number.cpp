class Solution {
public:
    int maximum69Number(int num) 
    {
        vector<int>m;
        int co=num;
        for(int i=0;co>0;co/=10)
        {
            int d=co%10;
            m.push_back(d);
        }
        reverse(m.begin(),m.end());
        for(int i=0;i<m.size();i++)
        {
            if(m[i]==6)
            {
                m[i]=9;
                break;
            }
        }
        int ans=0;
        for(auto x:m)
        {
            ans=(ans*10)+x;
        }
        return ans;
    }
};