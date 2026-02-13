#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout << "------------Calculator using switch case------------\n";
    cout << " Enter 2 numbers: ";
    cin >> a >> b;
    cout << "Enter the operator: ";
    cin >> op;
    switch (op)
    {
        case '+': cout << "Addition: " << a+b;
                  break;
        case '-': cout << "Subtraction: " << a-b;
                  break;
        case '*': cout << "Multiplication: " << a*b;
                  break;
        case '/': cout << "Division: " << a/b; 
                  break;
        case '%': cout<< "Rendinder: " << a%b;
                  break;
        default:  cout << "Invalid operator";
    }
}
