class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        string res="";
        int c=0;
        int n=s.length();
        int i=0;
        for(i=0;i<n;i++)
        {
            if(i<spaces[c])
            {
                res+=s[i];
            }
            else
            {
                res.append(" ");
                c++;
                res+=s[i];
                if(spaces.size()<=c)
                {
                    break;
                }
            }
        }
        res+=s.substr(i+1,(n-i));
        return res;
    }
};