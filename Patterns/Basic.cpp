//------------------------------------- *        1
//------------------------------------- * *      22
//------------------------------------- * * *    333
//------------------------------------- * * * *  4444

#include <iostream>
using namespace std;

int main()
{
    // int count;
    // cout << "Enter Count for numbers ";
    // cin >> count;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* "; // for star (*) replace i with *
        }
        cout << endl;
    }

    return 0;
}