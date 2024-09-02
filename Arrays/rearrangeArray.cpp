// an array consist positive and negative values write a program to re-arrange int alternating positive and negative
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

// CASE 1 :  POSITIVE & NEGATIVE ELEMENT IN SAME NUMER
vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result_arr(n, 0);
    int j = 0, k = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            result_arr[k] = nums[i];
            k += 2;
        }
        else
        {
            result_arr[j] = nums[i];
            j += 2;
        }
    }
    return result_arr;
}

// CASE 2: POSITIVE & NEGATIVE ELEMENT'S COUNT NOT EQUAL
vector<int> rearrangeArrayCaseTwo(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result_arr(n, 0);
    vector<int> pos, neg;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            neg.emplace_back(nums[i]);
        }
        else
        {
            pos.emplace_back(nums[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            result_arr[2 * i] = pos[i];
            result_arr[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            result_arr[index++] = pos[i];
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            result_arr[2 * i] = pos[i];
            result_arr[2 * i + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            result_arr[index++] = neg[i];
        }
    }
    return result_arr;
}

int main()
{
    vector<int> even_count = {3, 1, -2, -5, 2, -4};
    vector<int> not_even_count = {-1, 2, 3, 4, -3, 1};
    vector<int> even_count_res = rearrangeArray(even_count);
    vector<int> not_even_count_res = rearrangeArrayCaseTwo(not_even_count);
    cout << "Array of Equal Count: ";
    printVector(even_count_res);
    cout << endl
         << "Array of Not Equal Count: ";
    printVector(not_even_count_res);
    return 0;
}
