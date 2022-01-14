#include<bits/stdc++.h>
using namespace std;

int arry_opr()
{
    cout<<"call from arry_size";
}

int main()
{
    int arr_size;
    cout<<"enter size of an array:"<<endl;
    cin>>arr_size;
    int arr[arr_size]; //arr[user like 15] //arr[10]
    cout<<"enter elements in array:"<<endl;
    for (int i = 0; i < arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"your array elements:"<<endl;
    for (int j = 0; j < arr_size; j++)
    {
        cout<<arr[j]<<endl;
    }
    

    
    //arry_opr();
    return 0;
}
