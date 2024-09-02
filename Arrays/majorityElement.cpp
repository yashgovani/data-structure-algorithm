// Write a program to find the element which appear more than n/2 times in array
#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
int majorityElementBrute(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > nums.size() / 2)
        {
            return nums[i];
        }
    }
    return -1;
}

// Better Solution
int majorityElement(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > nums.size() / 2)
        {
            return it.first;
        }
    }
    return -1;
}

// Optimum Solution - Moore's Algorithm
int majorityElementOptimal(vector<int> &nums)
{
    int ele = nums[0], cnt = 1;
    int finalCount = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == ele && cnt > 0)
        {
            cnt++;
        }
        else if (nums[i] != ele && cnt > 0)
        {
            cnt--;
        }
        else
        {
            ele = nums[i];
            cnt = 1;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == ele)
        {
            finalCount++;
        }
    }

    return finalCount > nums.size() / 2 ? ele : -1;
}

int main()
{
    vector<int> nums = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    cout << "Majority Element in Brute Force:";
    cout << majorityElementBrute(nums) << endl;
    cout << "Majority Element in Better Solution:";
    cout << majorityElement(nums) << endl;
    cout << "Majority Element in Optimal Solution :";
    cout << majorityElementOptimal(nums) << endl;

    return 0;
}