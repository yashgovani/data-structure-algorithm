/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.*/

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int count = 0;
    int preSum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        preSum += nums[i];
        int temp = preSum - k;
        count += mpp[temp];
        mpp[preSum]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 1, 1};
    cout << "Sub Array Count With Sum K: " << subarraySum(nums, 2);
    return 0;
}