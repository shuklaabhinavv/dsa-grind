class Solution {
public:
    bool all(unordered_map<char,int>m)
    {
        for(auto a:m)
        {
            if(a.second!=0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) 
    {
        unordered_map<char,int>m;
        int n=s.size();
        int k=p.size();
        for(auto x:p)
        {
            m[x]++;
        }
        int i=0,j=0;
        vector<int>ans;
        while(j<n)
        {
            m[s[j]]--;
            if(j-i+1==k)
            {
                if(all(m))
                {
                    ans.push_back(i);
                }
                m[s[i]]++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return ans;
    }
};