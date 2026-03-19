#include <iostream>
using namespace std;
int largestOfThree(int a, int b, int c)
{
    if (a > b)
    {
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    return c;
}
int main()
{
    return 0;
}