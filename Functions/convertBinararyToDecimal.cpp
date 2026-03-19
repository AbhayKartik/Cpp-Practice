#include <iostream>
using namespace std;

int convertBinararyToDecimal(int num)
{
    int dec = num;
    int result = 0;
    int pow = 1;
    while (dec > 0)
    {
        /* code */
        int lastdigit = dec % 10;
        result += lastdigit * pow;
        pow = pow * 2;
        dec = dec / 10;
    }

    return result;
}
int main()
{
    return 0;
}