//--------------------------Assisgnment question 1-------------------------

#include <iostream>
using namespace std;

int main()
{

    int a;
    cout << "enter a number ";
    cin >> a;

    if (a > 0)
    {

        cout << "number is positibe " << a << endl;
    }
    else if (a < 0)
    {
        cout << "number is Nagative " << a << endl;
    }
    else
    {
        cout << "number is zero " << a << endl;
    }

    return 0;
}