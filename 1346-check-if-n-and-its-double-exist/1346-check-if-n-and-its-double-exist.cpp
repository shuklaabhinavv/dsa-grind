class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]=i;
        }
        for(auto x:m)
        {
            if(m.find(x.first*2)!=m.end())
            {
                if(x.second!=m[x.first*2])
                {
                    return true;
                }
            }
        }
        return false;
    }
};