class Solution {
public:
    bool isPre(string s, string key) 
    {
        int n=key.length();
        int m=s.length();
        if (n>m) 
        {
            return false;
        }
        string su=s.substr(0, n);
        return su==key;
    }
    int isPrefixOfWord(string sentence, string searchWord) 
    {
        int c=1;
        string wrd="";
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]!=' ')
            {
                wrd=wrd+sentence[i];
            }
            else
            {
                if(isPre(wrd,searchWord)==true)
                {
                    return c;
                }
                else
                {
                    wrd="";
                    c++;
                    continue;
                }
            }
        }
        if(isPre(wrd,searchWord))
        {
            return c;
        }
        return -1;
    }
};