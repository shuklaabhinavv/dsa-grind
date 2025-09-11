class Solution {
public:
    string sortVowels(string s) 
    {
        vector<char>m;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                m.push_back(s[i]);
                s[i]='$'; 
            }
        }
        // if(m.size()==s.length())
        // {
        //     sort(s.begin(),s.end());
        //     return s;
        // }
        sort(m.begin(),m.end());
        for(auto x:m)
        {
            cout << x << endl;
        }
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='$')
            {
                s[i]=m[j];
                j++;
            }
        }
        return s;
    }
};