// Write a program to clear the ith bit
#include <bits/stdc++.h>
using namespace std;

int clearTheIthBit(int num, int bit)
{
    return (num & ~(1 << bit));
}

int main()
{
    int num = 13, bit = 2;
    cout << "After clearing the ith bit of " << num << ": " << clearTheIthBit(num, bit);
    return 0;
}