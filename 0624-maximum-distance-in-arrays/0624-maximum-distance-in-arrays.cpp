class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        pair<int,int>p1,p2,p3,p4;
        int max1,max2,min1,min2;
        max1=max2=INT_MIN;
        min1=min2=INT_MAX; 
        p1.second=max1; 
        p2.second=max2;
        p3.second=min1; 
        p4.second=min2;
        for(int i=0;i<arrays.size();i++)
        {
            int n=arrays[i].size();
            if(arrays[i][n-1]>max1)
            {
                p2=p1; max1=arrays[i][n-1];
                p1.first=i; p1.second=max1;
            }
            else if(arrays[i][n-1]>max2)
            {
                p2.second=arrays[i][n-1];
                p2.first=i;
            }
            if(arrays[i][0]<min1)
            {
                p4=p3; min1=arrays[i][0];
                p3.first=i; p3.second=min1;
            }
            else if(arrays[i][0]<min2)
            {
                p4.second=arrays[i][0];
                p4.first=i;
            }
        }
        int dis=0;
        if(p1.first==p3.first)
        {
            int d=abs(p2.second-p3.second);
            int d1=abs(p1.second-p4.second);
            dis=max(d1,d);
        }
        else
        {
            dis=abs(max1-min1);
        }
        return dis;
    }
};