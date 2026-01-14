//-----------------------factorial of a number

#include <iostream>
using namespace std;

int main()
{

    int num;
    int total = 1;
    cout << "enter a number ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        total *= i;
        cout << total << " ";
    }
    cout << total;

    return 0;
}