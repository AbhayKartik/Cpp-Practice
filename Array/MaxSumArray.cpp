#include <iostream>
using namespace std;

void MaxSumArrayO3(int arr[], int n)

{

    int maxsum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {

        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxsum = max(maxsum, currSum);
        }
        cout << endl;
    }
    cout << "MAX " << maxsum;
}

void MaxSumArrayO2(int arr[], int n)

{

    int maxsum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {

            currSum += arr[end];

            maxsum = max(maxsum, currSum);
        }
    }
    cout << "MAX " << maxsum;
}

void MaxSumArrayByKadansAlgo(int arr[], int n)
{
    int maxsum = INT8_MIN;
    int currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxsum = max(maxsum, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << "Max " << maxsum;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    MaxSumArrayByKadansAlgo(arr, n);
    return 0;
}