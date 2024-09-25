#include <bits/stdc++.h>
using namespace std;

// Write a program to remove the last set bit (Right most)
// ex 1 1 0 0 -> 1 0 0 0
int removeTheLastSetBit(int num)
{
    return (num & (num - 1));
}

// problem is to set the rightmost unset bit in the binary representation of n
// 1 1 0 -> 1 1 1
int removeTheLastUnSetBit(int num)
{
    return (num | (num + 1));
}

int main()
{
    int num = 9;
    cout << "After Removing the last set bit of " << num << ": " << removeTheLastSetBit(num) << endl;
    cout << "After setting the last unset bit of " << num << ": " << removeTheLastUnSetBit(num);
    return 0;
}