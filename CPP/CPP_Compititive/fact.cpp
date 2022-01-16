#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;


class Solution
{
    public:
    int abc(int n)
    {
        int res[500];

        res[0] = 1;
        int res_size = 1;

        for (int x=2; x<=n; x++)
        {
            res_size = multiply(x, res, res_size);
        }

        cout << "Factorial of given number is \n";
        for (int i=res_size-1; i>=0; i--)
            cout << res[i];
        
        return 0;
    }

    public:
    int multiply(int x, int res[], int res_size)
    {
        int carry = 0;

        for (int i=0; i<res_size; i++)
        {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;  
            carry  = prod/10;    
        }

        while (carry)
        {
            res[res_size] = carry%10;
            carry = carry/10;
            res_size++;
        }
        return res_size;
    }

public:
int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        return int((n * (n + 1)) / 2) - accumulate(array.begin(), array.end(),0);
        
    }

public:
	string fractionToDecimal(int numerator, int denominator) {
        float ans = (float)numerator / (float)denominator;
        string ans1  =  to_string(ans);
        for (int i = 0; i < ans1.size(); i++)
        {
            if(ans1[i] == '.')
            {
                     
            }
        }
        return "(" + ans1 + ")";
	}
};
  
// Driver code
int main()
{
    Solution sn;
    vector<int> vec = {1,2,3,5};
    //cout<<sn.abc(250)<<endl;
    //cout<<sn.MissingNumber(vec,5);
    cout<<sn.fractionToDecimal(1,3);
    
    return 0;
}
  