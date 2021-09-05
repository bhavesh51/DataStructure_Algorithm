#include<bits/stdc++.h>
using namespace std;

class operator_prac
{
    public:
    void unary_ops(int a, int b)
    {
        ++a;
        b++;
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
};

class addition_class
{
    public:
    int sum_add(int a, int b)
    {
        return a + b;
    }
};

class bitwise_opr
{
    public:
    void binary_biwise_opr(int a, int b)
    {
        cout<<"a & b : "<<(a&b)<<endl;
        cout<<"a | b : "<<(a|b)<< endl;
        cout<<"a << b : "<<(a<<b)<<endl;
        cout<<"a >> b : "<<(a>>b)<<endl;

    }
};

int main()
{
    operator_prac obj;
    addition_class aclass;
    //obj.unary_ops(5,10);
    //cout<<"Adition : "<<aclass.sum_add(5,10)<<endl;
    bitwise_opr btobj;
    int a, b;
    cin>>a>>b;
    cout<<"a^b:"<<(a^b)<<endl;
    btobj.binary_biwise_opr(a,b);
    return 0;
}

//left shift <<
// 22 << 2 -> 22*(2^2)
// 2 -> 0010 + 0010 = 0100
// (8^4) -> 1000 + 0100 = 1100
//8,4,2,1


//right shift >>
// 32 >> 2 -> 32/(2^2)
// 