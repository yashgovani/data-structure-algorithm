#include <iostream>
using namespace std;

bool findNumber(int *arr, int start, int end, int target)
{

    if (start > end)
    {
        return false;
    }
    int middle = (start + end) / 2;

    if (arr[middle] == target)
    {
        return true;
    }
    if (arr[middle] < target)
    {
        return findNumber(arr, middle + 1, end, target);
    }
    else
    {
        return findNumber(arr, start, middle - 1, target);
    }
}

int main()
{
    int size = 7;
    int arr[size] = {7, 18, 24, 39, 42, 55, 63};
    if (findNumber(arr, 0, size, 7))
    {
        cout << "Target element found in given array";
    }
    else
    {
        cout << "Target element not found in given array";
    }
    return 0;
}