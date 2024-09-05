// Write a program to rotate matrix by 90 degree
/*************************
1 2 3 4        -      13 9 5 1
5 6 7 8        -      14 10 6 2
9 10 11 12     -      15 11 7 3
13 14 15 16    -      16 12 8 4
****************************/
#include <bits/stdc++.h>
using namespace std;

// Better Solution
void rotateMatrixBy90deg(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> ans(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][m - i - 1] = arr[i][j];
        }
    }
    cout << "Rotated Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// Optimum solutin
//  in optimum solution we can reduce the space we have taken to store rotated matrix
void rotateMatrixBy90degOptimal(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    cout << "Rotated Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    rotateMatrixBy90degOptimal(arr);
    return 0;
}