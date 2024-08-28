#include <iostream>
using namespace std;

int main()
{
    int size = 8;
    int arr[size] = {3, 4, 7, 6, 1, 9, 0, 2};
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < size; i += 1)
    {
        cout << arr[i] << " ";
    }
    return 0;
}