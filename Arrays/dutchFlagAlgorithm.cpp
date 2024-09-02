// write a program to sort the array of 0's, 1's and 2's
// Dutch National Flag Algorithm
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    cout << "Sorted Array is: ";
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void sortColors(vector<int> &nums)
{
    int low = 0, mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 1};
    sortColors(nums);
    printVector(nums);
    return 0;
}