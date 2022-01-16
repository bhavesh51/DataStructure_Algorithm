#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"hello welcome to  2-D array:"<<endl;
    cout<<"enter array rows and colums:"<<endl;
    int rows, cols;
    cin>>rows>>cols;
    int t_arr[rows][cols];

    cout<<"enter elemets of array:"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>t_arr[i][j];        
        }
        
    }
    cout<<"your array elements:"<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Element at arr [" << i << "][" << j << "]: ";
            cout<<t_arr[i][j]<<endl;        
        }
        
    }
    return 0;    
    //int t_arr[rows][cols];
}