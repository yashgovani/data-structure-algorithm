// Write a program to rotate array left side by one place
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRotateByOnePlace(vector<int> &arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
}

int main()
{
    vector<int> arr = {23, 5, 17, 89, 34, 2, 77, 11, 58, 44, 29, 6, 92, 71, 38};
    leftRotateByOnePlace(arr);
    cout << "Rotated Array: ";
    printArray(arr);
    return 0;
}