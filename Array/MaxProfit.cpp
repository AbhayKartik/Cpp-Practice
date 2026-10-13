#include <iostream>
using namespace std;

void maxProfit(int arr[], int n)
{
    int bestBuy[100000];
    bestBuy[0] = INT8_MAX;
    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
        cout << bestBuy[i] << endl;
    }
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        int currProfit = arr[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout << "Max Profit is = " << maxProfit << endl;
}

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
    int arr[] = {7, 1, 5, 9, 3, 8};
    int n = sizeof(arr) / sizeof(int);
    maxProfit(arr, n);
    return 0;
}