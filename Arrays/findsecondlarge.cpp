// Find the second largest element from given array
#include <iostream>
#include <vector>
using namespace std;

int print2largest(vector<int> &arr)
{
    int largest = arr[0], slargest = -1;
    if (arr.size() < 2)
    {
        return -1;
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] != largest)
        {
            slargest = arr[i];
        }
    }

    return slargest;
}

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    cout << print2largest(arr);
    return 0;
}