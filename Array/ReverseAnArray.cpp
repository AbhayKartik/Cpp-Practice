// reversed a array using extra space
#include <iostream>
using namespace std;

// int reveArr(int arr[], int n)
// {
//     int revArr[n];

//     for (int i = 0; i < n; i++)
//     {
//         revArr[n - i] = arr[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << revArr[i] << " ,";
//     }

//     return -1;
// }

int revarray(int arr[], int n)
{

    return 0;
}

int main()
{
    int num[] = {20, 30, 50, 60, 70, 21, 56};
    int n = sizeof(num) / sizeof(int);
    int rarr[n];
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ,";
    }
    cout << endl;
    for (int i = n; i >= 0; i--)
    {
        rarr[n - i - 1] = num[i];
    }
    for (int i = 0; i < n; i++)
    {
        num[i] = rarr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ,";
    }

    return 0;
}

// reversed a array without using extra space
