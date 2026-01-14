//-------------------to N check prime number

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    // int prime = 0;
    cout << "Enter a number ";
    cin >> number;
    for (int i = 2; i <= number; i++)
    {
        bool prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }

        if (prime)
        {
            cout << i << " " << endl;
        }
    }

    return 0;
}