#include<bits/stdc++.h>

using namespace std;

class my_STL
{
    public:
    int STL_Array()
    {
        int size = 10;
        int *ptr;
        ptr = &size;
        printf("%d",size);
        printf("%p",ptr);
        array <int ,5> arr = {1,2,3,4,5};
        for (int i = 0; i < arr.size(); i++)
        {
            printf("%d\n",i);
        }
        return size;
    }

    public:
    int hello()
    {
        cout<<"hello"<<endl;
    }
};

class my_vec
{
    public:
    int vec1()
    {
        printf("vector\n");
        vector <int> v1;
        for (int i = 0; i < 15; i++)
        {
            v1.push_back(i);
        }
        
        for (int j = 0; j < v1.size(); j++)
        {
            printf("%d\n",j);
        }
        cout<<"Size of vector : "<<v1.size()<<endl;
        return 0;
    } 
   
};

class vec_operation
{
    public:
    int vec_opr()
    {
        vector<int> g1;
        for (int z = 0; z < 10; z++)
        {
            g1.push_back(z);
        }

        cout<<"Output of begin and end:"<<endl;
        for (auto i = g1.begin(); i!=g1.end(); ++i)
        {
            cout<<*i<<endl;
        }
        
        cout<<"output from cbegin and cend"<<endl;
        for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        {
            cout<<*i<<endl;
        }  
    }
};



int main()
{
    cout<<"STL array operation:"<<endl;
    printf("start....");
    my_STL obj1;
    obj1.STL_Array();
    obj1.hello();
    my_vec myvec_obj;
    myvec_obj.vec1();
    vec_operation vec_opration;
    vec_opration.vec_opr();
    return 0;
}

