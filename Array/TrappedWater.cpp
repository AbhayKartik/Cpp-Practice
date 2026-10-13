#include <iostream>
using namespace std;

int trap(int arr[], int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = arr[0];
    rightMax[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
        cout << "leftMax " << leftMax[i] << ",";
    }
    cout << endl;
    for (int i = n - 2; i > 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i + 1]);
        cout << "RightMax " << rightMax[i] << ",";
    }
    cout << endl;
    int waterTrapped = 0;

    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - arr[i];
        cout << "currWtaer" << currWater << " ,";
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }
    cout << endl;
    cout << "water Trapped " << waterTrapped << endl;

    return waterTrapped;
}

int main()
{
    int heights[] = {9, 5, 10, 2, 6, 9, 15, 2};
    int n = sizeof(heights) / sizeof(int);
    trap(heights, n);
    return 0;
}