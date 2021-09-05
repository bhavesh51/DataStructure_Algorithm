#include<bits/stdc++.h>
using namespace std;
#define MUL(x, y) (x * y)
class sol_cin_ignore
{
    public:
    void method1()
    {
        string a,d;
        int b;
        
        getline(cin,a);
        cin>>b;
        cin.ignore();
        getline(cin,d);    

        cout<<a<<endl;
        cout<<b<<endl;
        cout<<d<<endl;
    }
    
    public:
    void precise(float a, float b)
    {   
        float c;
        c = a/b;    
        cout<<c<<" "<<setprecision(3)<<fixed<<c<<endl;
        cout<<endl;
    }

    public:
    void macro_prac(int a, int b)
    {
        cout<<MUL(a,b);
    }

    public:
    void dataTypes(int a, float b, double c, long long l, string d)
    {
        float p = b/c;
        double q = b/a;
        int r = c/a;
        long long m = r + l;
        cout << sizeof(p) <<" "<< sizeof(q) <<" "<< sizeof(r) <<" "<< sizeof(m) << endl;
        cout << sizeof(d) <<" "<< sizeof(d[3]) << endl;
    }

    public:
    void logicOp(int a, int b)
    {
        /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
        cout<<(a&&b)<<" "<<(a||b)<<" "<<((!a)&&(!b))<<endl;
    }

    public:
    void bitWiseOperation(int a, int b, int c)
    {
        int d,e,f,g;
        d = a^a;
        e = c^b;
        f = a&b;
        g = c | d;
        cout<<d<<endl;
        cout<<e<<endl;
        cout<<f<<endl;
        cout<<g<<endl;
        cout<<e<<"and"<<~e<<endl;
        int xx = 8^2;
        cout<<"XX:"<<xx<<endl;
    }

    public:
    void evenodd(int a, int b)
    {   
        //5,2
        if(a%2  == 0)
        {
            cout<<a<<endl;
        }
        if(b%2 == 0)
        {
            cout<<b<<endl;
        }
        if(a%2 == 1)
        {
            cout<<a<<endl;
        }
        if(b%2 == 1)
        {
            cout<<b<<endl;
        }
    }

    public:
    bool isPrime(int n)
    {
        // Corner case
        if (n <= 1)
            return false;
    
        // Check from 2 to n-1
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
    
        return true;
    }
    // Function to print primes
    void printPrime(int n)
    {
        for (int i = 2; i <= n; i++) {
            if (isPrime(i))
                cout << i << " ";
        }
    }
    
    public:
    void isDivisibleByPrime(int n)
    {
        
        if(n%11 == 0)
        {
            cout<<"Eleven"<<endl;
        }
        else if(n%3 == 0)
        {
            cout<<"Three"<<endl;
        }
        else if(n%2 == 0)
        {
            cout<<"Two"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    public:
    string isprime_check(int n)
    {
        if (n <= 1)
            return "No";
        if (n <= 3)
            return "Yes";
        else
        {
            for (int i = 2; i <= sqrt(n); i++) 
            {
                if (n % i == 0)
                {
                    return "No";
                }
                return "Yes";
            }
        }
    }

};



int main()
{
    int t;
    cin >> t;
    //cin.ignore();
    sol_cin_ignore obj;
    cout<<obj.isprime_check(t)<<endl;
    cout<<sqrt(t)<<endl;
        //obj.method1(); 
        //obj.precise(5.43,2.653);
        //obj.macro_prac(5,6);
        //obj.dataTypes(1,2,3,5,"gfgc");
        //obj.logicOp(6,7);
        //obj.bitWiseOperation(4,8,2);
        //obj.evenodd(5,2);
        //obj.printPrime(100);
        //obj.isDivisibleByPrime(3);
        //obj.isDivisibleByPrime(t);
    
    

    return 0;
}