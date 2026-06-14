#include<iostream>
using namespace std;
int myfunc()
{
    int i{};
    cout << "Put your no. we will double it :" ;
    cin >> i ; 
    return i; 
}
int main()
{
    int num {myfunc()};
    cout << "Double of " << num << " is " << num*2 << "\n";
    return 0;
}