#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cout <<" Enter a and b values: ";
   cin>>a>>b;
   cout << "Value of a is: "<<a<<"\nValue of b is: "<<b;
   a = a+b;
   b = a-b;
   a = a-b;
   cout <<"\nValue of a is: "<<a<<"\nValue of b is: "<<b;

}
