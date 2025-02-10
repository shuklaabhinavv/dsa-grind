class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        for(auto i:s)
        {
            if(!isdigit(i))
            {
                st.push(i);
            }
            else
            {
                st.pop();
            }
        }
        string ans="";
        while(st.empty()!=true)
        {
            ans=ans+st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};