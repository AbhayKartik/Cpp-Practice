#include <iostream>
using namespace std;

void changeA(int &num)
{
    num = 23;
    cout << "In the function " << num << endl;
}
int main()
{
    int a = 10;
    cout << "Before Function " << a << endl;
    changeA(a);
    cout << "After Function " << a << endl;

    return 0;
}