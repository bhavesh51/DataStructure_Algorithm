#include<bits/stdc++.h>
using namespace std;

class solution1
{
    public:
    vector<int> vec1(vector<vector<int>> v1)
    {
        for (int i = 0; i <= v1.size(); ++i)
        {
            for (int j = 0; j <= v1[i].size(); ++j)
            {
                cout<< v1[i][j] <<" ";
            }
            cout<<endl;
            
        }
        
    }
};

int main()
{
    solution1 sol;
    vector<vector<int>> global_vec;
    for (int i = 0; i <= 5; i++)
    {
        vector<int> v1;
        for (int j = 0; j <= i; j++)
        {
            v1.push_back(i);
        }
        global_vec.push_back(v1);
    }
    
    sol.vec1(global_vec);
    
    return 0;
}