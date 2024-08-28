// Write a program to find number using linear search
#include <iostream>
using namespace std;

bool findNumber(int *arr, int size, int target)
{

    if (size == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    return findNumber(arr + 1, size - 1, target);
}

int main()
{
    int size = 7;
    int arr[size] = {7, 18, 24, 39, 42, 55, 63};
    if (findNumber(arr, size, 42))
    {
        cout << "Target element found in given array";
    }
    else
    {
        cout << "Target element not found in given array";
    }
    return 0;
}