// write a program to find two number whose sum is equal to the target
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    cout << "Two number whose sum equal to the target are: ";
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int more = target - nums[i];
        if (mpp.find(more) != mpp.end())
        {
            return {i, mpp[more]};
        }
        mpp[nums[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    vector<int> nums = {2, 6, 5, 8, 11};
    vector<int> result = twoSum(nums, 14);
    printVector(result);
    return 0;
}