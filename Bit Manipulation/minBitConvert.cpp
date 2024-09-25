// Given two integers start and goal, return the minimum number of bit flips to convert start to goal.
#include <bits/stdc++.h>
using namespace std;

int minBitFlips(int start, int goal)
{
    int ans = start ^ goal;
    int count = 0;
    while (ans > 0)
    {
        ans = (ans & (ans - 1));
        count += 1;
    }
    return count;
}

int main()
{
    int start = 10, goal = 7;
    cout << "To reach the goal we need to flip " << minBitFlips(start, goal) << " bits.";
    return 0;
}