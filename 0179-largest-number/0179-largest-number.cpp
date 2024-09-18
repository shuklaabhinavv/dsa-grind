bool compare(int a,int b)
    {
        return to_string(a)+to_string(b)>to_string(b)+to_string(a);
    }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans="";
        sort(nums.begin(),nums.end(),compare);
        for(auto x:nums)
        {
            ans+=to_string(x);
        }
        return ans;
    }
};