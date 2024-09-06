// Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
//  I/P: "(1+(2*3)+((8)/4))+1" O/P: 3
//  I/P: "(1)+((2))+(((3)))" O/P: 3
//  I/P: "()(())((()()))"  O/P: 3
#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int mDepth = 0;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            count += 1;
        }
        else if (s[i] == ')')
        {
            count -= 1;
        }
        mDepth = max(count, mDepth);
    }
    return mDepth;
}

int main()
{
    vector<string> st = {"(1+(2*3)+((8)/4))+1", "(1)+((2))+(((3)))", "()(())((()()))"};
    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i] << ": " << maxDepth(st[i]) << endl;
    }
    return 0;
}