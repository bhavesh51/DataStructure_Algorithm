#include<bits/stdc++.h>

using namespace std;

int hello(int a)
{
    cout<<a<<endl;
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int add_array(int* p, int size)
{
    int total = 0;
    for (int i = 0; i <= size; ++i)
    {
        total += p[i];
    }
    return total;
}

int main()
{
    int var_a = 10;
    int *p;
    p = &var_a;
    cout<<"pointers basic"<<endl;
    cout<<"*p is : "<<*p<<endl;
    cout<<"p is : "<<p<<endl;

    //function pointers
    //return type (*ptr_name)(type1, type2…);  
    int (*func_ptr)(int); //declaration function according to our function
    func_ptr = hello; //assign to function to pointers 
    cout<<"hello function pointers : "<<*func_ptr<<endl;
    cout<<"*func_ptr"<<(*func_ptr)(25)<<endl;
    cout<<"func_ptr"<<func_ptr(50)<<endl;


    int m = 25, n = 20;
    swap(&m, &n);
    cout<<m<<"\t"<<n<<endl;

    int Tab[5] = {100, 220, 37, 16, 98};
    cout<<"array:"<<add_array(Tab,5);

    return 0;
}