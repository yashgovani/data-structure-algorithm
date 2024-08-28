#include <iostream>
using namespace std;

int findMinimum(int arr[], int size)
{
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int findMaximum(int arr[], int size)
{
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int size;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Value is: " << findMaximum(arr, size) << endl;
    cout << "Minimum Value is: " << findMinimum(arr, size) << endl;
    return 0;
}