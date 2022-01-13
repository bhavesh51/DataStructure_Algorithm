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

class vec_inbuild_fun
{
    public:
    void vector_inbuild_function()
    {
        //define vector
        vector<int> vector_info;

        //insert elements in vector
        for (auto m = 0; m < 20; m++)
        {
            vector_info.push_back(m);
        }
        
        //check size capacity and max_length
        printf("vector size : %ld\n",vector_info.size());
        printf("vector capacity : %ld\n",vector_info.capacity());
        printf("vector maxsize : %ld\n",vector_info.max_size());

        //resize of vector using 
        vector_info.resize(10);
        printf("Vector size after resize operation : %ld\n", vector_info.size());

        //shrink to fil it allow automatic vector size
        vector_info.shrink_to_fit();

        for (auto m = vector_info.begin(); m != vector_info.end(); ++m)
        {
            printf("%d\n",*m);
        }
    }
};

class vec_ele_access
{
    public:
    void vec_ele_acc(vector<int> vect)
    {
        for (auto m = vect.begin(); m != vect.end(); ++m)         
        {
            printf("global vector elements : %d\n",*m);
        }
        printf("ref operator vect[6]: %d\n", vect[6]);
        printf("vector front element : %d and back elements : %d \n", vect.front(),vect.back());
        printf("--:access vector elemets using pointer:--\n");
        
        //define pointer variable like int* abcd;
        int* pointer1 = vect.data();
        printf("first elemets of vector using pointer : %d \n",*pointer1);
        
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

    vec_inbuild_fun vec_inbuild_fun;
    vec_inbuild_fun.vector_inbuild_function();

    vector<int> global_vector;
    for (auto m = 0; m <= 10; m++)
    {
        global_vector.push_back(m);
    }
    vec_ele_access ele_acc;
    ele_acc.vec_ele_acc(global_vector);

    

    return 0;
}
