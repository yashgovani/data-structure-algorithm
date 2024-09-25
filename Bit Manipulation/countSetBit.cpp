// Write a program to count the number of set bits
#include <bits/stdc++.h>
using namespace std;

// First way
// int countNumberOfSetBits(int num)
// {
//     int count = 0;
//     while (num > 1)
//     {
//         count += num & 1;
//         num = num >> 1;
//     }
//     if (num == 1)
//         count += 1;
//     return count;
// }

// second way
int countNumberOfSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count += 1;
        num = (num & (num - 1));
    }
    return count;
}

int main()
{
    cout << "Number of set bits in given number is: " << countNumberOfSetBits(15) << endl;
    cout << "Cpp has in built function to count bits: " << __builtin_popcount(16);
    return 0;
}