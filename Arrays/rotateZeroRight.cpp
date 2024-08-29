// Write a program to move all the zero to right side of array
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void moveZeroToRight(vector<int> &arr)
{
    int i = 0;
    int j = -1;
    while (i < arr.size())
    {
        if (arr[i] == 0)
        {
            j = i + 1;
            break;
        }
        i++;
    }
    while (j < arr.size())
    {
        cout << "Value of i: " << i << endl;
        cout << "Value of j: " << j << endl;
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
            continue;
        }
        j++;
    }
}

int main()
{
    vector<int> arr = {3, 0, 7, 0, 12, 0, 9, 5, 0, 6, 0, 8, 1, 0, 4};
    moveZeroToRight(arr);
    cout << "Rotated Array:";
    printArray(arr);
    return 0;
}