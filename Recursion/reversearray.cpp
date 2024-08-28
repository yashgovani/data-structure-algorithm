// Write a program to reverse an array using recursion
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(int start, int end, vector<int> &arr)
{
    if (start >= end)
    {
        return;
    }
    swap(arr[start], arr[end]);
    reverseArray(start + 1, end - 1, arr);
}

void reverseArrayLoop(vector<int> &arr)
{
    int p1 = 0, p2 = arr.size() - 1;
    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    vector<int> arr;
    vector<int> revarr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    // reverseArray(0, arr.size() - 1, arr); // using recursion
    reverseArrayLoop(arr); // using loop
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}