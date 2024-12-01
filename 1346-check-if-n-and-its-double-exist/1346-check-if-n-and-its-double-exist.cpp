class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int key=arr[i]*2;
            int s=0;
            int e=n-1;
            while(s<=e)
            {
                int m=s+((e-s)/2);
                if(arr[m]==key&&m!=i)
                {
                    return true;
                }
                else if(arr[m]>key)
                {
                    e=m-1;
                }
                else
                {
                    s=m+1;
                }
            }      
        }
        return false;
    }
};