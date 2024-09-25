// Write a program to compress the given string
// This code is slight variation of stringCompression.cpp
// Input : a a a a a a a a a a a a b b c | Output 9 a 3 a 2 c
// If greater than 9 than we need to find modulo of 9
#include <bits/stdc++.h>
using namespace std;

string compressedString(string word)
{
    string ans = "";
    int i = 0;
    int n = word.size();
    while (i < n)
    {
        int j = i + 1;
        while (j < n && word[i] == word[j])
        {
            j++;
        }
        int diffCount = j - i;
        while (diffCount > 9)
        {
            ans += "9";
            ans += word[i];
            diffCount -= 9;
        }
        ans += to_string(diffCount);
        ans += word[i];
        i = j;
    }
    return ans;
}

int main()
{
    cout << "Compressed string: " << compressedString("abcde") << endl;
    cout << "Compressed string: " << compressedString("aaaaaaaaaaaaaabb") << endl;
    return 0;
}