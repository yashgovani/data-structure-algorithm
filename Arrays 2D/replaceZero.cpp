// Write a code for matrix if found 0 thenn the whole row and column set to 0
/*
1 1 1 1       1 0 0 1
1 0 0 1   =>  0 0 0 0
1 1 0 1       0 0 0 0
1 1 1 1       1 0 0 1
*/
#include <bits/stdc++.h>
using namespace std;

// Better Solution
void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, 0);
    vector<int> col(m, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || col[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

// Optimal Solution
// Difference between better and optimal solution is that we can reduce space complexity by not using array outside
void replaceZeroInMatrixOptimal(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();
    int col0 = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                if (j != 0)
                    arr[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
    if (arr[0][0] == 0)
    {
        for (int i = 0; i < m; i++)
        {
            arr[0][i] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            arr[i][0] = 0;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    replaceZeroInMatrixOptimal(arr);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}