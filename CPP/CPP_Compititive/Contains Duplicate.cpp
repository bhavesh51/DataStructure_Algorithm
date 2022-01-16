// Input: nums = [1,2,3,1]
// Output: true
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int i;
        int size = nums.size();
        cout << "The repeating elements are:" << endl;
        for (i = 0; i < size; i++) 
        {
            if (nums[abs(nums[i])] >= 0)
                nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
                cout << abs(nums[i]) << " ";
        }

    }
};

int main()
{
    Solution sol;
    vector<int> vect = {50,20,20,30,40,51};
    //sol.containsDuplicate(vect);
    sort(vect.begin(),vect.end());
    for (int i = 0; i < vect.size(); i++)
    {
        cout<<vect[i]<<endl;
        if(vect[i] == vect[i+1])
        {
            cout<<"true";
        }
    }
    cout<<"false";
    
    
    return 0;
}