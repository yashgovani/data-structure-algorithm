/* Write a program to find the number that appears once and the other number twice */
#include <bits/stdc++.h>
using namespace std;

int findSoloNumber(vector<int> &arr)
{
    int soloNumber = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        soloNumber ^= arr[i];
    }
    return soloNumber;
}

int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    cout << "Number that appear only single time: " << findSoloNumber(arr);
    return 0;
}