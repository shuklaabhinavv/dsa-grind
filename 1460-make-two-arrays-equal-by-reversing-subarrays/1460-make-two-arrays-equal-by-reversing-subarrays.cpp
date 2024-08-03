class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        unordered_map<int,int>mt;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            mt[target[i]]++;
        }
        for(auto x : m)
        {
            if(mt[x.first]!=x.second)
            {
                return false;
            }
        }
        return true;
    }
};