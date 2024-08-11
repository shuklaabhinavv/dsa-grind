class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        bool flag=true;
        string ans="";
        for(int i=0;i<n;i++)
        {
            int ab = (int)s[i];
            if((ab>=65&&ab<=90)||(ab>=97&&ab<=122)||(ab>=48&&ab<=57))
            {
                ans.push_back(s[i]);
            }
        }
        int num=ans.size();
        if(num==1)
        {
            return flag;
        }
        else
        {
            for(int i=0;i<num/2;i++)
            {
                int x=(int) ans[i];
                int y=(int) ans[num-i-1];
                if(x>=65&&x<=90)
                {
                    x=x+32;
                }
                if(y>=65&&y<=90)
                {
                    y=y+32;
                }
                if(x!=y)
                {
                    flag=false;
                    break;
                }
            }
        }
        return flag;        
    }
};