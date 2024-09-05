// Write a program to find leaders in array (Leader: whose all right side elements are lesser than him)
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

// Brute Force
void findLeadersBrute(vector<int> arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size(); i++)
    {
        bool leader = true;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {
            result.emplace_back(arr[i]);
        }
    }
    cout << "Leaders in array are: ";
    printVector(result);
}

void findLeaders(vector<int> &arr)
{
    vector<int> ans;
    int n = arr.size();
    int max = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            ans.emplace_back(arr[i]);
            max = arr[i];
        }
    }
    cout << "Leaders in array are: ";
    printVector(ans);
}

int main()
{
    vector<int> arr = {10, 22, 12, 3, 0, 6};
    findLeaders(arr);
    return 0;
}