// Write a program to check if string is palindrome is not
// We need to ignore space and symbol and case not sensitive
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
        }
        else if (!isalnum(s[end]))
        {
            end--;
        }
        else if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    if (isPalindrome("A man, a plan, a canal: Panama"))
    {
        cout << "Given string palindrome";
    }
    else
    {
        cout << "Given string is not palindrome";
    }
    return 0;
}