// Write a program to find maximum sub array sum - sub array must be contigious
#include <bits/stdc++.h>
using namespace std;

// We can resolve this by using kadane's algorithm
int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maximum = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maximum = max(maximum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maximum;
}

// Extended - Need to Print Sub Array as well
void findMaximumSum(vector<int> &arr)
{
    int ansStart = -1, ansEnd = -1;
    int start = 0;
    int sum = 0;
    int maximum = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > maximum)
        {
            maximum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }

    cout << "Maximum Sum is: " << maximum << endl;
    cout << "Sub Array: ";
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "Maxx sum in first fun: ";
    cout << maxSubArray(nums);
    cout << endl;
    findMaximumSum(nums);
    return 0;
}