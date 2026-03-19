#include <iostream>
using namespace std;

char nextCharacter(char a)
{
    if (a == 'z')
    {
        return 'a';
    }
    if (a == 'Z')
    {
        return 'A';
    }
    return a + 1;
}
int main()
{
    return 0;
}