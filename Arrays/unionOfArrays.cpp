// Write a program to return union array of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> unionOfArray(vector<int> a, vector<int> b)
{
    vector<int> resultArr;
    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] <= b[j])
        {
            if (resultArr.size() == 0 || resultArr.back() != a[i])
            {
                resultArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (resultArr.size() == 0 || resultArr.back() != b[j])
            {
                resultArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < a.size())
    {
        if (resultArr.size() == 0 || resultArr.back() != a[i])
        {
            resultArr.push_back(a[i]);
        }
        i++;
    }

    while (j < b.size())
    {
        if (resultArr.size() == 0 || resultArr.back() != b[j])
        {
            resultArr.push_back(b[j]);
        }
        j++;
    }

    return resultArr;
}

int main()
{
    vector<int> a = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> b = {2, 3, 3, 5, 6, 7};
    vector<int> resultArr = unionOfArray(a, b);
    printArray(resultArr);
    return 0;
}