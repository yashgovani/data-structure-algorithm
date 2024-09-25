// Write a program to find lower bound of the given array lower bound means arr[i] >= target
#include <bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target)
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
    cout << lower_bound(arr, 6);
    return 0;
}