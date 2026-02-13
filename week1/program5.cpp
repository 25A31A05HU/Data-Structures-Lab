#include <iostream>
using namespace std;
int main()
{
    int n, count;
    cout << "-------------Checking whether prime number or not-------------\n";
    cout << "Enter a number: ";
    cin >> n;
    for (int i;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        cout << n <<" is a prime number";
    }
    else
    {
        cout << n <<" is not Prime number";
    }
}
