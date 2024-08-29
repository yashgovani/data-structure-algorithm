// Write a program to find maximum length of consicutive one
#include <bits/stdc++.h>
using namespace std;

int findConsicutiveOneLength(vector<int> &arr)
{
    int cnt = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            cnt += 1;
            maxLen = max(cnt, maxLen);
            continue;
        }
        cnt = 0;
    }
    return maxLen;
}

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    cout << "Maximum consicutive one length: " << findConsicutiveOneLength(arr);
    return 0;
}