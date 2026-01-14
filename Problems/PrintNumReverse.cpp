//-----------------print number in reverse

#include <iostream>
using namespace std;

int main()
{

    int n = 6325123;
    int result = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        result = result * 10 + lastdigit;
        n = n / 10;
    }
    cout << result;

    return 0;
}