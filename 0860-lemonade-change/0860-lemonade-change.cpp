class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a,b,c,n;
        n=bills.size();
        a=b=c=0;
        if(bills[0]!=5) return false;
        for(int i=0;i<n;i++)
        {
            if(bills[i]==5)
            {
                a++;
            }
            else if(bills[i]==10)
            {
                if(a<1) return false;
                a--;
                b++;
            }
            else if(bills[i]==20)
            {
                if((b<1||a<1)&&a<3) return false;
                if(b>=1)
                {
                    b--;
                    a--;
                }
                else if(b==0)
                {
                    a-=3;
                }
                c++;
            }
        }
        return true;
    }
};