// Write a program to rotate array left side by k place
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRotateBykPlace(vector<int> &arr, int k)
{
    k = k % arr.size();
    // Reverse the first k elements
    reverse(arr.begin(), arr.begin() + k);

    // Reverse the remaining elements
    reverse(arr.begin() + k, arr.end());

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {23, 5, 17, 89, 34, 2, 77, 11, 58, 44, 29, 6, 92, 71, 38};
    leftRotateBykPlace(arr, 14);
    cout << "Rotated Array: ";
    printArray(arr);
    return 0;
}