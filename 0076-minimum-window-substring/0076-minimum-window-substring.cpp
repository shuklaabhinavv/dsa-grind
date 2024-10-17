class Solution {
public:
    string minWindow(string s, string t) {
        int count=t.size();
        int n=s.size();
        if(count>n)
        {
            return "";
        }
        unordered_map<char,int>m;
        for(auto x:t)
        {
            m[x]++;
        }
        int w=INT_MAX;
        int ai=0;
        int i=0;
        int j=0;
        while(j<n)
        {
            char ch=s[j];
            if(m[ch]>0)
            {
                count--;
            }
            m[ch]--;
            while(count==0)
            {
                int curr=j-i+1;
                if(w>curr)
                {
                    w=curr;
                    ai=i;
                }
                m[s[i]]++;
                if(m[s[i]]>0)
                {
                    count++;
                }
                i++;
            }
            j++;
        }
        return w==INT_MAX ? "" : s.substr(ai,w);
    }
};