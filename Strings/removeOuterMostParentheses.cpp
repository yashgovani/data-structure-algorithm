// Write a program to remove outer most parentheses.
#include <bits/stdc++.h>
using namespace std;

string removeOuterMostParentheses(string s)
{
    int counter = 0;
    string ans = "";
    int i = 0;
    int n = s.size();
    while (i < n)
    {
        if (s[i] == '(')
        {
            counter += 1;
            if (counter != 1)
            {
                ans += s[i];
            }
        }
        else if (s[i] == ')')
        {
            counter -= 1;
            if (counter != 0)
            {
                ans += s[i];
            }
        }
        i++;
    }

    return ans;
}

int main()
{
    cout << "After removing outer most parentheses: " << removeOuterMostParentheses("((()))(()())");
    return 0;
}