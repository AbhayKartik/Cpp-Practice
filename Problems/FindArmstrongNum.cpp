//-------------------------for armstrong number

#include <iostream>
using namespace std;

int main()
{

    int number;
    int total = 0;
    int cube = 0;
    cout << "enter a 3 digit number to check armstrong ";
    cin >> number;

    while (number > 0)
    {
        int digit = number % 10;
        cube = digit * digit * digit;
        total += cube;
        number = number / 10;
    }

    cout << total << endl;

    return 0;
}