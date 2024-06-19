class Solution {
public:
    bool ispossible(int ind,vector<int> &arr, int m,int k)
    {
        int boq=0;int cont=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<=ind)
            {
                cont++;
            }
            else
            {
                cont=0;
            }
            if(cont==k) 
            {
                boq++;
                cont=0;
            }
        }
        return (boq>=m);
    }
    int minDays(vector<int>& arr, int m, int k) {
        long long int n=arr.size();
        int max=arr[0];
        if(n<(1LL*m*k)) return -1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max) 
            {
                max=arr[i];
            }
        }
        int start=1;
        int end=max;
        int ans=-1;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(ispossible(mid,arr,m,k))
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};