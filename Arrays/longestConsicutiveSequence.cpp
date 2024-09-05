// Write a program to find the length of longest consicutive sequence
#include <bits/stdc++.h>
using namespace std;

// Better solution
// Sort the array and traverese one by one
void longestConsicutiveSeqLenBetter(vector<int> &arr)
{
    int count = 0;
    int lastSmaller = INT_MIN;
    int longest = 1;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            count += 1;
            lastSmaller = arr[i];
        }
        else if (arr[i] != lastSmaller)
        {
            count = 1;
            lastSmaller = arr[i];
        }
        longest = max(longest, count);
    }
    cout << "Longest Consicutive Length is: " << longest;
}

// Optimum solution - using set
void longestConsicutiveSeqLenOptimal(vector<int> &arr)
{
    set<int> st;
    int n = arr.size();
    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                cnt += 1;
                x += 1;
            }
            longest = max(longest, cnt);
        }
    }
    cout << "Longest Consicutive Length is: " << longest;
}

int main()
{
    // Info: sorted array is not necessary
    // for better solution need to sort the array first;
    vector<int> arr = {1, 1, 1, 2, 2, 2, 3, 3, 4, 100, 100, 101, 101, 102, 103, 104};
    longestConsicutiveSeqLenOptimal(arr);
    return 0;
}