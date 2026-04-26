#include <iostream>
using namespace std;

int findarray(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 56, 85, 123, 5, 10, 15, 6, 2, 16};
    int n = sizeof(arr) / sizeof(int);

    int found = findarray(arr, n, 16);
    cout << found;

    return 0;
}