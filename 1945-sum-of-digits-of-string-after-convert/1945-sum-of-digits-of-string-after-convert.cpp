class Solution {
public:
    int digitSum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int d=n%10;
            sum+=d;
            n/=10;
        }
        return sum;
    }

    int digitSum(string s) {
        int sum = 0;
        for(char c : s) {
            sum += c - '0'; // Convert char digit to int digit and add
        }
        return sum;
    }

    int getLucky(string s, int k) 
    {
        unordered_map<char,int>m;
        for(int i=97;i<=122;i++)
        {
            char ch=(char)i;
            m[ch]=i-96;
        }
        string so="";
        for(char x:s)
        {
            int a = m[x];
            so += to_string(a);
        }

        // Apply the digit sum transformation k times
        for(int j = 0; j < k; j++) {
            int sum = digitSum(so); // Calculate the digit sum
            so = to_string(sum); // Convert back to string for next iteration
        }

        return stoi(so); // Final result as integer
    }
};
