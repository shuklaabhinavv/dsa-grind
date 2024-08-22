class Solution {
public:
    string convertBinary(int num)
    {
        string str="";
        while(num)
        {
            if(num & 1)
            {
                str+='1';
            }
            else 
            {
                str+='0';
            }
            num>>=1;
        }    
        reverse(str.begin(),str.end());
        return str;
    }
    string comp(string a)
    {
        int n=a.size();
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1')
            {
                a[i]='0';
            }
            else if(a[i]=='0')
            {
                a[i]='1';
            }
        }
        return a;
    }
    int convertDecimal(string s)
    {
        int dec_value = 0;
        long long int base = 1;
        int len = s.length();
        for (int i = len - 1; i >= 0; i--) 
        {
            if (s[i] == '1')
                dec_value += base;
            base = base * 2;
        }
        return dec_value;
    }
    int bitwiseComplement(int num) 
    {
        if(num==0) return 1;
        string b=convertBinary(num);
        string bi=comp(b);
        int bin=convertDecimal(bi);
        return bin;
    }
};