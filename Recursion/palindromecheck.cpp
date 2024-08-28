// Write a program to check if given string is palindrome or not
#include <iostream>
using namespace std;

bool checkPalindrom(int start, string s)
{
    if (start >= s.length() / 2)
    {
        return true;
    }

    if (s[start] != s[s.length() - start - 1])
    {
        return false;
    }

    return checkPalindrom(start + 1, s);
}

int main()
{
    string s = "MADAM MADAM";
    if (checkPalindrom(0, s))
    {
        cout << "String is palindrome";
    }
    else
    {
        cout << "Given string not palindrome";
    }
    return 0;
}