class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int i=0;int j=0;
        int n=nums.size();
        unordered_set<int>s;
        while(j<n)
        {
            if(abs(i-j)>k)
            {
                s.erase(nums[i]);
                i++;
            }
            if(s.find(nums[j])!=s.end())
            {
                return true;
            }
            s.insert(nums[j]);
            j++;
        }
        return false;
    }
};