class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string word="";
        unordered_map<string,int>m;
        vector<string>ans;
        for(auto x:s1)
        {
            if(x==' ')
            {
                m[word]++;
                word="";
            }
            else
            {
                word+=x;
            }
        }
        m[word]++;
        word="";
        for(auto x:s2)
        {
            if(x==' ')
            {
                m[word]++;
                word="";
            }
            else
            {
                word+=x;
            }
        }
        m[word]++;
        for(auto x:m)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};