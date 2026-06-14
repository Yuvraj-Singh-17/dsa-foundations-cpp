#include<iostream>
using namespace std;

int Cube()
{
    int i{}, ans;
    cout << " We gives you the Cube of  number , please put you no" << "\n" <<" : ";
    cin >> i; 
    ans = i*i*i;
    return ans;
}
int num {Cube()};
int main()
{
    cout << " The Cube of the number " << "is : " << num << "\n";
    return 0;
}