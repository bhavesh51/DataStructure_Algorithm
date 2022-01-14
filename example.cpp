#include<iostream>

using namespace std;

int main()
{
    //variable defin karu 
    // datatype variable nu name = koi valu value rakhvi hoi to
    float javab, javab2;
    int value1, value2 = 50, value3 = 2;
    cout<<"please enter value : "<<endl;
    cin>>value1; // user jode thi value lidhi
    javab = value1 + value2 / value3; //125
    javab2 = (value1 + value2) / value3; //75 // banne na sarvad ke badabaki
    cout<<"sarvada no answer : "<<javab<<endl; //javab print lidho
    cout<<"bija sarvada no answer : "<<javab2;
    return 0;
}