// Write a program to rotate array right side by one place
#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void rightRotateBykPlace(vector<int> &arr, int k)
{
    k = k % arr.size();
    // Reverse the first k elements
    reverse(arr.begin(), arr.end() - k);

    // Reverse the remaining elements
    reverse(arr.end() - k, arr.end());

    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    // vector<int> arr = {23, 5, 17, 89, 34, 2, 77, 11, 58, 44, 29, 6, 92, 71, 38};
    rightRotateBykPlace(arr, 3);
    cout << "Rotated Array: ";
    printArray(arr);
    return 0;
}