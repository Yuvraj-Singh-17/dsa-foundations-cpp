#include <iostream>
using namespace std;

int Cube()
{
    int ans,i{};
    cout << "Enter a number : ";
    cin >> i ;
    ans=i*i*i;
    return ans;
}
int main()
{
    int n {Cube()};
    cout << n << "\n";
    return 0;
}