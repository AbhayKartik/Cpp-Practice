#include <iostream>
using namespace std;

void changeA(int *num)
{
    *num = 100;
    cout << *num << endl;
}

int main()
{
    int a = 20;
    cout << a << endl;

    changeA(&a);
    cout << a << endl;
    return 0;
}