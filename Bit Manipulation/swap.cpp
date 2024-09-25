// Write a program to swap two variable without using third one
#include <bits/stdc++.h>
using namespace std;

void swapTwoNumber(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a = 5, b = 7;
    swapTwoNumber(a, b);
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    return 0;
}