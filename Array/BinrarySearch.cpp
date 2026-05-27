#include <iostream>
using namespace std;

int binSearch(int arr[], int n, int key)
{
    int start = 0;
    int End = n - 1;
    while (start <= End)
    {
        int mid = (start + End) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            End = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 20, 25, 68, 99, 120, 168, 170};

    int n = sizeof(arr) / sizeof(int);

    int result = binSearch(arr, n, 170);

    cout << result << endl;
    return 0;
}