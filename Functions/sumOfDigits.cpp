#include <iostream>
using namespace std;
int sumOfDigits(int num)
{

    int result = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        result = result + lastdigit;
        // cout << "result" << result << endl;
        num = num / 10;
        // cout << "num" << num << endl;
    }
    return result;
}
int main()
{
    return 0;
}