#include <iostream>
using namespace std;

void CountShort(int arr[], int n)
{
    int freq[100000] = {0};
    int minVal = INT16_MAX, maxVal = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}
int main()
{
    return 0;
}
