// write a program to check if string is anagram to other string or not
// anagram means count occurence of character is same in both string
// car and rac both ara anagram
#include <bits/stdc++.h>
using namespace std;

bool compareArray(vector<int> arr1, vector<int> arr2)
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

// first way: we can create two vector and put the occurence in the same array later we can compare both array
bool checkForAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    int i = 0;
    int n = s.size();
    vector<int> st(26, -1);
    vector<int> ts(26, -1);
    while (i < n)
    {
        st[s[i] - 'a']++;
        ts[t[i] - 'a']++;
        i++;
    }
    return compareArray(st, ts);
}

// second way: in this we will string char and occurence in map while traversing to first array
// while traversong second string we will decrese the count and in last if all zero than it's anagram
bool checkForAnagramAnotherWay(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    unordered_map<char, int> mpp;
    for (auto st : s)
    {
        if (mpp.find(st) != mpp.end())
        {
            mpp[st]++;
        }
        else
        {
            mpp[st] = 1;
        }
    }
    for (auto st : t)
    {
        if (mpp.find(st) != mpp.end())
        {
            mpp[st]--;
        }
        else
        {
            mpp[st] = 1;
        }
    }
    for (auto st : mpp)
    {
        if (st.second > 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    if (checkForAnagram("anagram", "nagaram"))
    {
        cout << "Provided both the strings are anagram to each other." << endl;
    }
    else
    {
        cout << "Provided both the strings are not anagram to each other." << endl;
    }
    if (checkForAnagramAnotherWay("rat", "car"))
    {
        cout << "Provided both the strings are anagram to each other." << endl;
    }
    else
    {
        cout << "Provided both the strings are not anagram to each other." << endl;
    }
    return 0;
}