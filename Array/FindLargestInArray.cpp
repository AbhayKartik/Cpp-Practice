#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 9, 18, 5, 3, 3, 65, 23, 855, 65, 1, 2, 5};
    int max = arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Max Number is " << max << endl;
    cout << arr << endl;
    return 0;
}