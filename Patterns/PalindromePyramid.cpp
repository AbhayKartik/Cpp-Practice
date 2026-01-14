//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout << "  ";
        }
        for (int k = i; k >= 2; k--)
        {
            cout << k << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << l << " ";
        }

        cout << endl;
    }

    return 0;
}