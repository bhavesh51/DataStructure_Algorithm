#include<bits/stdc++.h>

using namespace std;

class Solution_twosum {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for (int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] + nums[i+1] == target)
            {
                    nums = {i,i+1};   
                    //nums.shrink_to_fit();                 
                
            }
        }  
        return nums;
    }   
};


int main()
{
    cout<<"Two Sum:"<<endl;
    printf("start....");
   

    vector<int> global_vector = {2,7,8,9,11,15};
        
    Solution_twosum Solution_twosum;
    Solution_twosum.twoSum(global_vector,20);

    return 0;
}