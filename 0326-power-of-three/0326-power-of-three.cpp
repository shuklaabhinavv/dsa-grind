class Solution {
public:
    double islogtobase(double a,double b)
    {
        return log10(a)/log10(b);
    }
    bool isInteger(double num)
    {
        return floor(num)==num;
    }
    bool isPowerOfThree(int n) {
        if(n==0)
        {
            return false;
        }
        if(isInteger(islogtobase(n,3)))
        {
            return true;
        }
        return false;
    }
};