// Find the largest element from given array
#include <iostream>
#include <vector>
using namespace std;

int printlargest(vector<int> &arr)
{
    int largest = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
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
    cout << printlargest(arr);
    return 0;
}