// reversed a array using extra space
#include <iostream>
using namespace std;

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
#include <iostream>
using namespace std;

int main()
{

    int nums[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(nums) / sizeof(int);

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ,";
    }

    return 0;
}