// Write a program to find next permutation
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void nextPermutation(vector<int> &arr)
{
    // next_permutation(arr.begin(),arr.end());
    int ind = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (arr[i] > arr[ind])
        {
            swap(arr[i], arr[ind]);
            break;
        }
    }
    reverse(arr.begin() + ind + 1, arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3};
    nextPermutation(arr);
    cout << "Next permutation is: ";
    printVector(arr);
    return 0;
}