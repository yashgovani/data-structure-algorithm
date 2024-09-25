// write a program to reverse a string
#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    string s = "Good";
    reverseString(s);
    cout << "After reversing string: " << s;
    return 0;
}