// Write a program to find largest odd number in given string
// Input : "52" Output: "5"
// Input : "4206" Output: ""
// Input : "35427" Output: "35427"
#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num)
{
    int i = num.length() - 1;
    // Traverse the string from the end to find the first odd digit
    while (i >= 0)
    {
        if (num[i] % 2 != 0)
        {                                // Check if the digit is odd
            return num.substr(0, i + 1); // Return the substring from start to i
        }
        i--;
    }
    return "None"; // Return an empty string if no odd digit is found
}

int main()
{
    vector<string> st = {"52", "4206", "35427"};
    for (int i = 0; i < st.size(); i++)
    {
        cout << st[i] << ":" << largestOddNumber(st[i]) << endl;
    }
    return 0;
}