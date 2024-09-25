// write a program to remove all the occurences of substring
#include <bits/stdc++.h>
using namespace std;

// Remove All Occurrences of a Substring
string removeOccurrences(string s, string part)
{
    while (!s.empty() && s.find(part) < s.size())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{

    cout << "After Removing substring occurence: " << removeOccurrences("daabcbaabcbc", "abc") << endl;
    cout << "After Removing substring occurence: " << removeOccurrences("axxxxyyyyb", "xy") << endl;
    return 0;
}