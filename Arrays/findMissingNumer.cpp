/* we have N and array of N-1 size array contain all the unique elements from 1 to N need to find missing number in array*/
#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int *arr, int N)
{
    int xor1 = 0;
    int missElement = 0;
    for (int i = 0; i < N - 1; i++)
    {
        missElement = missElement ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    missElement = missElement ^ xor1;
    return missElement;
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    cout << "Missing Number from array is: " << findMissingNumber(arr, 10);
    return 0;
}