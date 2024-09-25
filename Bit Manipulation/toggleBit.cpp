// Write a program to toggle the ith bit
#include <bits/stdc++.h>
using namespace std;

int toggleTheIthBit(int num, int bit)
{
    return (num ^ (1 << bit));
}

int main()
{
    int num = 13, bit = 1;
    cout << "After toggling the ith bit of " << num << ": " << toggleTheIthBit(num, bit);
    return 0;
}