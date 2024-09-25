// write a program to find a number that appear exatly once and other appears thrice
#include <bits/stdc++.h>
using namespace std;

// Best Solution
int findASingleNumber(vector<int> &nums)
{
    int n = nums.size();
    int i = 1;
    sort(nums.begin(), nums.end());
    if (n == 1)
    {
        return nums[0];
    }
    while (i < n)
    {
        if (nums[i] == nums[i - 1] && nums[i] == nums[i + 1])
        {
            i += 3;
        }
        else
        {
            return nums[i - 1];
        }
    }
    return nums[n - 1];
}

// Optimum solution
int findASingleNumberOptimal(vector<int> &nums)
{
    int ones = 0, twos = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ones = ((ones ^ nums[i]) & (~twos));
        twos = ((twos ^ nums[i]) & (~ones));
    }
    return ones;
}

int main()
{
    vector<int> arr = {0, 1, 0, 1, 0, 1, 99};
    cout << "Number that appears only once is: " << findASingleNumber(arr) << endl;
    cout << "Number that appears only once using optimal solution is: " << findASingleNumberOptimal(arr);
    return 0;
}