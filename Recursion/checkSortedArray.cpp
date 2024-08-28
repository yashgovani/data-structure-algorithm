#include <iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if (size == 0)
    {
        return true;
    }
    if (arr[size] < arr[size - 1])
    {
        return false;
    }
    return isSorted(arr, size - 1);
}

int main()
{
    int size = 7;
    int arr[size] = {7, 30, 24, 39, 42, 55, 63};
    if (isSorted(arr, size - 1))
    {
        cout << "Provided array is sorted";
    }
    else
    {
        cout << "Provided array is not sorted";
    }

    return 0;
}