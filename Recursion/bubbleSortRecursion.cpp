// Write a program for bubble sort using recursion
#include <iostream>
#include <algorithm>
using namespace std;

void printArrayy(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int *arr, int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, size - 1);
}

int main()
{
    int size = 10;
    // int arr[size] = {52, 14, 61, 42, 78, 20, 7};
    int arr[size] = {10, 14, 28, 11, 7, 16, 30, 50, 25, 18};
    bubbleSort(arr, size);
    printArrayy(arr, size);
    return 0;
}