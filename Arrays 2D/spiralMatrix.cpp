// write a program to do spiral traversal in matrix
/*******************************
Input:
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

Output:
[1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10]
 */

#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &nums)
{
    for (auto it : nums)
    {
        cout << it << " ";
    }
}

void spiralRotateMatrix(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    vector<int> ans;
    int top = 0, left = 0, right = m - 1, bottom = n - 1;

    while (top <= bottom && left <= right)
    {
        // left to right
        for (int i = left; i <= right; i++)
        {
            ans.emplace_back(arr[top][i]);
        }
        top++;
        // top to bottom
        for (int i = top; i <= bottom; i++)
        {
            ans.emplace_back(arr[i][right]);
        }
        right--;
        if (left <= right)
        {
            // right to left
            for (int i = right; i >= left; i--)
            {
                ans.emplace_back(arr[bottom][i]);
            }
            bottom--;
        }

        if (top <= bottom)
        {
            // bottom to top
            for (int i = bottom; i >= top; i--)
            {
                ans.emplace_back(arr[i][left]);
            }
            left++;
        }
    }
    cout << "Spiral Rotation of array: ";
    printVector(ans);
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiralRotateMatrix(arr);
    return 0;
}