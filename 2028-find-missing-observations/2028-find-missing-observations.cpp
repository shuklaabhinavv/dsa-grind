class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum=0;
        for(auto x:rolls)
        {
            sum+=x;
        }
        int a=rolls.size();
        int avg=mean*(a+n);
        int rem=avg-sum;
        if(rem>6*n||rem<n)
        {
            return {};
        }
        avg = rem/n;
        int balance = rem%n;
        vector<int> ans(n, avg);
        for(int i = 0; i < balance; i++)
        {
            ans[i]++;
        }
        return ans;
    }
};