// Write a program to check if provided number's ith bit is set or unset
#include <bits/stdc++.h>
using namespace std;

bool checkForIthBitIsSetOrNot(int num, int bit)
{
    // first way
    if (num & (1 << bit) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    // Or we can do this using right shift as well
    // second way
    if (((num >> bit) & 1) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num = 13, bit = 2;
    if (checkForIthBitIsSetOrNot(13, 1))
    {
        cout << "Provided numbers bit is set";
    }
    else
    {
        cout << "Provided numbers bit is unset";
    }

    return 0;
}