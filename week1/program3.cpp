#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "--------------Greatest between three numbers--------------\n";
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if(a > b && a > c)
    {
        cout << a <<" is the biggest nubmer";
    }
    else if(b > c)
    {
        cout << b << " is the biggest number";
    }
    else
    {
    cout << c << " is the biggest number";
    }
}
