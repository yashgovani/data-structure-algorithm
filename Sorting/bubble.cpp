#include <iostream>
#include <math.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int swapNum = arr[i];
                arr[i] = arr[j];
                arr[j] = swapNum;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {8, 5, 7, 3, 9};
    bubbleSort(arr, 5);
    return 0;
}