// Write a program to check if array is sorted or not
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size = 7;
    int arr[size] = {7, 16, 24, 39, 42, 55, 63};
    if (isSorted(arr, size))
    {
        cout << "Provided array is sorted";
    }
    else
    {
        cout << "Provided array is not sorted";
    }

    return 0;
}