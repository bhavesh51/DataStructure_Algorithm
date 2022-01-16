#include<bits/stdc++.h>
using namespace std;
#define EVEN 0
#define ODD 1
class star_pattern
{
    public:
    //rectangular star pattern
    void solid_rect(int n, int m)
    {

    }
};

int main()
{
    
   int i = 3;
    switch (i & 1)
    {
        case EVEN: cout << "Even";
                break;
        case ODD: cout << "Odd";
                break;
        default: cout << "Default";
    }
    
    return 0;
}