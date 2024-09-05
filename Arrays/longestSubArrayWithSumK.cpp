// Write a program to find longest sub array with sum k
#include <bits/stdc++.h>
using namespace std;

// This is the better solution when array contains only positive integers
// but if it contains negative as well then this is optimal solution
void findlongestSubArrayWithSumKLength(vector<int> &arr, int target)
{
    map<int, int> mpp;
    int longest = 0;
    int preSum = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        if (preSum == target)
        {
            longest = max(longest, i + 1);
        }
        int temp = preSum - target;
        if (mpp.find(temp) != mpp.end())
        {
            longest = max(longest, i - mpp[temp]);
        }
        if (mpp.find(preSum) == mpp.end())
        {
            mpp[preSum] = i;
        }
    }

    cout << "Longest SubArray Length With Sum k:" << longest;
}

// This will only work for positive integer
// this is optimal solution for positive int array
void findlongestSubArrayWithSumKLengthOptimal(vector<int> &arr, int target)
{
    int longest = 0;
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int n = arr.size();
    while (right < n)
    {
        while (left <= right && sum > target)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == target)
        {
            longest = max(longest, right - left + 1);
        }
        right++;
        if (right < n)
            sum += arr[right];
    }

    cout << "Longest SubArray Length With Sum k:" << longest;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    // vector<int> arr = {2, 0, 0, 0, 0, 3};
    findlongestSubArrayWithSumKLengthOptimal(arr, 4);
    return 0;
}