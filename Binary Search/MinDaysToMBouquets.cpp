#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMinMaxDays(vector<int> &arr, int n)
{
    pair<int, int> p1 = {1000, -1};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > p1.second)
        {
            p1.second = arr[i];
        }
        if (arr[i] < p1.first)
        {
            p1.first = arr[i];
        }
    }
    return p1;
}

int bouquetCount(vector<int> &arr, int n, int day, int k)
{
    int maxCount = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= day)
        {
            count += 1;
        }
        else
        {
            maxCount += (count / k);
            count = 0;
        }
    }
    maxCount += (count / k);
    return maxCount;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    if (m * k > n)
    {
        return -1;
    }
    pair<int, int> p1 = findMinMaxDays(bloomDay, n);
    while (p1.first <= p1.second)
    {
        int mid = (p1.first + p1.second) / 2;
        int maxAdjacent = bouquetCount(bloomDay, n, mid, k);
        if (maxAdjacent >= m)
        {
            p1.second = mid - 1;
        }
        else
        {
            p1.first = mid + 1;
        }
    }
    return p1.first;
}

int main()
{
    // vector<int> bloomDay = {1, 10, 3, 10, 2};
    vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
    cout << "Max days: " << endl
         << minDays(bloomDay, 2, 3);
    return 0;
}