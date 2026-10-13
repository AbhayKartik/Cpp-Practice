#include <iostream>
using namespace std;
void selectionShort(int arr[], int n)
{

    int Curarr = arr[0];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            if (arr[i] < arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}

void selectionShort2(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minidx])
            {
                minidx = j;
            }
        }
        swap(arr[i], arr[minidx]);
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