class Solution 
{
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        unordered_map<char,int>m;
        for(auto x:allowed)
        {
            m[x]++;
        }
        int ans=0;
        for (auto x: words) 
        {
            bool found = true;
            for (char c: x) 
            {
                if (m[c] == 0) 
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                ans++;
            }
        }
        return ans;
    }
};