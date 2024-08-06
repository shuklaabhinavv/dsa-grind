class Solution {
public:
    int minimumPushes(string word) {
        vector<int>map(26);
        int n=word.size();
        for(auto x : word) {
            map[x-'a']++;
        }
        sort(map.rbegin(),map.rend());
        int ans = 0;
        for(int i=0;i<26;i++)
        {
            ans+=((i/8)+1)*map[i];
        }
        return ans;
    }
};