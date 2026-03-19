#include <iostream>
using namespace std;

bool checkPalindrome(int num)
{
    int nume = num;
    int result = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        result = result * 10 + lastdigit;
        num = num / 10;
    }

    if (result == nume)
    {
        return true;
    }

    return false;
}
int main()
{
    return 0;
}