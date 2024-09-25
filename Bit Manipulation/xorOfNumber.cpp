// write a program to Find xor of numbers from L to R.
#include <bits/stdc++.h>
using namespace std;

int findXOROfNumber(int num)
{
    if (num % 4 == 0)
    {
        return num;
    }
    else if (num % 4 == 1)
    {
        return 1;
    }
    else if (num % 4 == 2)
    {
        return num + 1;
    }
    else
    {
        return 0;
    }
}

// Find a XOR between custom range
int findXOROfCustomRange(int start, int end)
{
    int num = findXOROfNumber(start - 1) ^ findXOROfNumber(end);
    return num;
}

int main()
{
    int num = 8;
    int start = 4;
    cout << "xor of numbers from 1 to " << num << " is: " << findXOROfNumber(num) << endl;
    cout << "xor of numbers from " << start << " to " << num << " is: " << findXOROfCustomRange(start, num);
    return 0;
}