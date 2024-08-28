#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 1)
    {
        return true;
    }
    if (arr[size - 1] > arr[size - 2])
        return isSorted(arr, size - 1);
}

int main()
{
    int size = 7;
    int arr[size] = {7, 18, 24, 39, 42, 55, 63};
    return 0;
}