class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            m[target[i]]--;
        }
        for(auto x : m)
        {
            if(x.second!=0)
            {
                return false;
            }
        }
        return true;
    }
};