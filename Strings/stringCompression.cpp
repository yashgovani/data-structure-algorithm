// Write a program to compress the given string
// Input : a a a b b c | Output a 3 b 2 c (Note: if only one occurence found do not add 1)
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<char> &chars, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << chars[i] << " ";
    }
}

int compress(vector<char> &chars)
{
    int i = 0;
    int n = chars.size();
    int ansIndex = 0;

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j - i;
        if (count > 1)
        {
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main()
{
    vector<char> chars = {'b', 'b', 'b', 'a', 'a', 'a', 'a', 'c', 'd', 'd'};
    int size = compress(chars);
    printVector(chars, size);
    return 0;
}