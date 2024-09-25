// write a program to find a unique number of pair that appear only once other are appearing twice.
#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int> &nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

vector<int> singleNumber(vector<int> &nums)
{
    long xorr = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ nums[i];
    }
    int rightMost = (xorr & (xorr - 1)) ^ xorr;
    int b1 = 0, b2 = 0;
    for (int i = 0; i < n; i++)
    {
        if ((nums[i] & rightMost) != 0)
        {
            b1 = b1 ^ nums[i];
        }
        else
        {
            b2 = b2 ^ nums[i];
        }
    }
    return {b1, b2};
}

int main()
{
    vector<int> arr = {1, 2, 1, 3, 2, 5};
    cout << "Pair that appear only once is: ";
    printVector(singleNumber(arr));
    return 0;
}