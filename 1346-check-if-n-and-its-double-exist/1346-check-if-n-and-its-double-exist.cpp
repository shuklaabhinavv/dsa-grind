class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
            {
                c++;
                if(c==2)
                {
                    return true;
                }
            }
            else
            {
                m[arr[i]]=i;
            }
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