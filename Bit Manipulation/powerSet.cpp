// Given an integer array nums of unique elements, return all possible subsets (the power set).
#include <bits/stdc++.h>
using namespace std;

// Function to print a vector of vectors
void printSubsets(const vector<vector<int>> &subsets)
{
    for (const auto &subset : subsets)
    {
        cout << "[";
        for (size_t i = 0; i < subset.size(); i++)
        {
            cout << subset[i];
            if (i != subset.size() - 1)
            {
                cout << ",";
            }
        }
        cout << "]" << endl;
    }
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    int size = nums.size();
    int subset = 1 << size;
    for (int num = 0; num < subset; num++)
    {
        vector<int> temp;
        for (int i = 0; i < size; i++)
        {
            if ((num & (1 << i)) != 0)
                temp.emplace_back(nums[i]);
        }
        ans.emplace_back(temp);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    cout << "Powerset of given array is: " << endl;
    printSubsets(subsets(nums));
    return 0;
}