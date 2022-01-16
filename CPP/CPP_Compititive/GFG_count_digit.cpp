#include<bits/stdc++.h>
using namespace std;

class count_digit
{
public:
    int countdigit(int digit)
    {
        int cnt = 0;
        while (digit > 0)
        {
            digit = digit / 10;
            cnt++;
        }
        return cnt;
    }    
};

int main()
{
    int digit, ans;
    cout<<"enter digit : "<<endl;
    cin>>digit;
    count_digit countobj;
    ans = countobj.countdigit(digit);
    cout<<ans;
    return 0;
}