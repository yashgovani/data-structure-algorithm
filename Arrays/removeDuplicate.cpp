// Write a program to remove duplicate element from sorted array
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int removeDuplicate(vector<int> &arr)
{
    int i = 0;
    int j = i + 1;
    while (j < arr.size())
    {
        if (arr[i] == arr[j])
        {
            j++;
        }
        else
        {
            swap(arr[i + 1], arr[j]);
            i++;
            j++;
        }
    }
    return i + 1;
}

int main()
{
    // vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> arr = {1, 1, 2};
    cout << "unique element count: " << removeDuplicate(arr);
    cout << endl;
    cout << "Modified array is: ";
    printArray(arr);
    return 0;
}