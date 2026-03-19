#include <iostream>
using namespace std;

int decToBin(int Decnum)
{
    int n = Decnum;
    int pow = 1;
    int binNum = 0;
    while (n > 0)
    {
        /* code */
        int rem = n % 2;
        binNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    return binNum;
}

int main()
{
    return 0;
}