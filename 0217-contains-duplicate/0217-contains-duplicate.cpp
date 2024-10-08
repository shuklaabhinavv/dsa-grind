class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto x: nums)
        {
            m[x]++;
        }
        for(auto a: m)
        {
            if(a.second>=2)
            {
                return true;
            }
        }
        return false;
    }
};