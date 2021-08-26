#include<bits/stdc++.h>

using namespace std;



class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {       
        return *max_element(arr.begin(),arr.end());
    }
};


int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        Solution obj;
        cout <<"largest element : "<<obj.largest(arr, n) << endl;
    }
    return 0; 
}