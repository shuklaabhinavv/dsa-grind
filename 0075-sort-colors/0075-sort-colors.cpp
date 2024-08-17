class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int>pass(3,0);
        for(int i=0;i<n;i++)
        {
            pass[nums[i]]++;
        }
        int it=0;
        for(int i=0;i<3;i++)
        {
            int c=pass[i];
            while(c>0)
            {
                nums[it]=i;
                it++;
                c--;
            }
        }
    }
};