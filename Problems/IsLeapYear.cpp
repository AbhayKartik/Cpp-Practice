//--------------------------Assisgnment question 2-------------------------

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year for checking is it leap or not ";
    cin >> year;

    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << year << "this year is leap" << endl;
    }

    else
    {
        cout << year << "this year is not leap" << endl;
    }

    return 0;
}