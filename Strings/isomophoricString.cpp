// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// I/P s = egg t = add | O/P = true (because g can be replaced by d and e can be replaced by a)
#include <bits/stdc++.h>
using namespace std;

// first way: create two map that can store s -> t and t ->  s
bool checkIsomophoricAnotherWay(string s, string t)
{
    if (s.length() != t.length())
        return false; // If lengths differ, not isomorphic

    unordered_map<char, char> map_s_to_t, map_t_to_s;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        char s_char = s[i];
        char t_char = t[i];

        // Check if s[i] is already mapped
        if (map_s_to_t.find(s_char) != map_s_to_t.end())
        {
            if (map_s_to_t[s_char] != t_char)
            {
                return false;
            }
        }
        else
        {
            map_s_to_t[s_char] = t_char;
        }

        // Check if t[i] is already mapped to a character from s
        if (map_t_to_s.find(t_char) != map_t_to_s.end())
        {
            if (map_t_to_s[t_char] != s_char)
            {
                return false;
            }
        }
        else
        {
            map_t_to_s[t_char] = s_char;
        }
    }

    return true;
}

// second way: this solution is using 2 vector and check it's previous indices
bool checkIsomophoric(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> st(256, -1);
    vector<int> ts(256, -1);
    for (int i = 0; i < s.size(); ++i)
    {
        if (st[s[i]] != ts[t[i]])
        {
            return false;
        }
        st[s[i]] = i;
        ts[t[i]] = i;
    }
    return true;
}

int main()
{
    if (checkIsomophoric("Aa", "Bb"))
    {
        cout << "Provided string is isomophoric" << endl;
    }
    else
    {
        cout << "Provided string is not isomophoric" << endl;
    }

    if (checkIsomophoricAnotherWay("foo", "bar"))
    {
        cout << "Provided string is isomophoric" << endl;
    }
    else
    {
        cout << "Provided string is not isomophoric" << endl;
    }
    return 0;
}