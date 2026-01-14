//------------------------------------------- A
//------------------------------------------- B C
//------------------------------------------- D E F
//------------------------------------------- G H I J

#include <iostream>
using namespace std;

int main()
{
    char val = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << val << " ";
            val++;
        }
        cout << endl;
    }

    return 0;
}