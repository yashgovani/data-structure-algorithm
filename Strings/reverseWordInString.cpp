// Write a program to reverse words in given string
// I/P : this is yash | O/P : yash is this
// we need to trim the string as well
#include <bits/stdc++.h>
using namespace std;

string reverseEveryWord(string str)
{
    int i = 0;
    string ans = "";
    int n = str.size();
    while (i < n)
    {
        while (i < n && str[i] == ' ')
        {
            i++;
        }
        if (i > n)
        {

            break;
        }
        int j = i + 1;
        while (j < n && str[j] != ' ')
        {
            j++;
        }
        string temp = str.substr(i, j - i);
        if (ans.empty())
        {
            ans = temp;
        }
        else
        {
            ans = temp + ' ' + ans;
        }
        i = j + 1;
    }
    return ans;
}

int main()
{
    cout << "After reversing every word in given string: " << reverseEveryWord("this is yash");
    return 0;
}