// Write a program to find second smallest element in array
#include <bits/stdc++.h>
using namespace std;

int print2Smallest(vector<int> &arr)
{
    int smallest = arr[0], ssmallest = INT_MAX;
    if (arr.size() < 2)
    {
        return -1;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] != smallest)
        {
            ssmallest = arr[i];
        }
    }

    return ssmallest;
}

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << print2Smallest(arr);
    return 0;
}