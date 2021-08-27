#include<bits/stdc++.h>
using namespace std;
//const int m = 3;
class two_dim_arr_opr
{
    public:
    template <size_t size_x, size_t size_y>
    void func(double (&arr)[size_x][size_y])
    {
        printf("%p\n", &arr);
    }
};

int main()
{
    double a1[10][10];
    double a2[5][5];
    two_dim_arr_opr obj;
    printf("%p\n%p\n\n", &a1, &a2);
    obj.func(a1);
    obj.func(a2);

    return 0;
}