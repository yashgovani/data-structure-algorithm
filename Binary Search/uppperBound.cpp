// Write a program to find an upper bound from given array
//  upper bound means arr[i] is strictly greater than the target
#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << upper_bound(arr, 5);
    return 0;
}