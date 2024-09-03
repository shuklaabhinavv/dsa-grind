class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>v;
        string a="";
        for(int j=0;j<n;j++)
        {
            if(s[j]==' '&&a.size()>0)
            {
                v.push_back(a);
                a.clear();
            }
            else if(s[j]!=' ')
            {
                a+=s[j];
            }
        }
        if(a.size()>0) v.push_back(a);
        string ans="";
        int c=v.size();
        int j=c-1;
        while(j>=0){
            ans+=v[j];
            if(j>0)
            ans+=" ";
            j--;
        }
        return ans;
    }
};