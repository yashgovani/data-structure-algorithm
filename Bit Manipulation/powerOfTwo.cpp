// Write a program to check if the provided number is power of two or not
#include <bits/stdc++.h>
using namespace std;

bool isNumberIsPowerOfTwo(int num)
{
    return ((num & (num - 1)) == 0);
}

int main()
{
    int num = 16;
    if (isNumberIsPowerOfTwo(num))
    {
        cout << num << " is power of two.";
    }
    else
    {
        cout << num << " is not power of two.";
    }
    return 0;
}