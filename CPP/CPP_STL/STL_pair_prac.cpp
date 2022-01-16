#include<bits/stdc++.h>
using namespace std;
//pair (data_type1, data_type2) Pair_name (value1, value2) ;
class pair_prac
{

    public:
    void pair_ops(int num, string name){
        pair<int, string> p1;
        p1.first = num;
        p1.second = name;
        cout<<p1.first<<endl<<p1.second<<endl;

        
    }

};

class pair_with_vector
{
    public:
    void pwv()
    {
        vector<int> vector_arr;
        pair<vector<int>, int> pv1;
        pv1.first = {10, 2, 30};
        pv1.second = 50;
        cout<<pv1.first.size()<<endl<<pv1.second<<endl;
        for (auto i = 0; i < pv1.first.size(); i++)
        {
            printf("vector elements at %d at value %d\n",i,pv1.first[i]);
        }
    }
};

int main()
{
    int number;
    //char name[20];
    string name;
    printf("enter roll number:\n");
    scanf("%d",&number);
 
    printf("enter name: \n");
    //scanf("%s",name);
    cin>>name;
 
    pair_prac pair_obj;
    pair_obj.pair_ops(number,name);

    pair_with_vector pwv;
    pwv.pwv();

    return 0;
}