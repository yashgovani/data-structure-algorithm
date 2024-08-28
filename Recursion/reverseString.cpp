// Write a program to reverse a string
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void reverseString(string &s, int i)
{
    if (i > s.length() / 2)
    {
        return;
    }
    swap(s[i], s[s.length() - i - 1]);
    reverseString(s, i + 1);
}

int main()
{
    string s = "yash";
    reverseString(s, 0);
    cout << "Reverse string: " << s;
    return 0;
}