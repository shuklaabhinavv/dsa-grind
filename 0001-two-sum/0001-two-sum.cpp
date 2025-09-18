class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int,int> m;
        int n=nums.size();
        int a=-1;
        int b=-1;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end()&&m[target-nums[i]]!=i)
            {
                a=i;
                b=m[target-nums[i]];
                break;
            }
        }
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};