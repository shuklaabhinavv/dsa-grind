class Solution {
public:
    string findcommon(string a,string b)
    {
        int len=min(a.length(),b.length());
        string res="";
        for(int i=0;i<len;i++)
        {
            if(a[i]==b[i])
            {
                res=res+a[i];
            }
            else
            {
                break;
            }
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string res=strs[0];
        for(int i=1;i<n;i++)
        {
            res=findcommon(res,strs[i]);
        }
        return res;
    }
};