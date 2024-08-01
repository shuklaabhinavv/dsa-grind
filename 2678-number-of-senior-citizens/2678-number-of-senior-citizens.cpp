class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        int age;
        string a="";
        for(auto x : details)
        {
            a=x.substr(11,2);
            age=stoi(a);
            if(age>60)
            {
                c++;
            }
        }
        return c;
    }
};