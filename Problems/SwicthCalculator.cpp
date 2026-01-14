

//--------------------------switch statement calculator ----------------------------------

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    char op;
    cout << "Enter a number ";
    cin >> a;
    cout << "Enter operator ";
    cin >> op;
    cout << "Enter a number ";
    cin >> b;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b << endl;
        break;
    case '%':
        cout << a << " % " << b << " = " << a % b << endl;
        break;
    default:
        cout << "invalid number" << endl;
    }
    return 0;
}
