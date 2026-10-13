#include <iostream>
using namespace std;

void insertionShort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int currArr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > currArr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = currArr;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    return 0;
}