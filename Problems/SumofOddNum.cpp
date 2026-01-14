//------------------------question sum of odd digit of a number

#include <iostream>
using namespace std;

int main()
{

    int n = 912369873;
    int sum = 0;
    while (n > 0)
    {
        int digi = n % 10;
        if (digi % 2 == 1)
        {
            cout << digi << endl;
            sum += digi;
            n = n / 10;
        }
        else
        {
            n = n / 10;
        }
    }

    cout << sum;
    return 0;
}