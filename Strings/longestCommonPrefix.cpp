// Write a program to find longest common prefix
//  Input:["flower","flow","flight"] Output: "fl"
#include <bits/stdc++.h>
using namespace std;

// This might be the brute force solution
string longestCommonPrefix(vector<string> &strs)
{
    string cmPrefix = strs[0];
    int n = strs.size();
    for (int i = 1; i < n; i++)
    {
        string temp = "";
        if (cmPrefix.length() > strs[i].length())
        {
            for (int j = 0; j < strs[i].length(); j++)
            {
                if (cmPrefix[j] == strs[i][j])
                {
                    temp += cmPrefix[j];
                    continue;
                }
            }
        }
        else
        {
            for (int j = 0; j < cmPrefix.length(); j++)
            {
                if (cmPrefix[j] == strs[i][j])
                {
                    temp += cmPrefix[j];
                    continue;
                }
            }
        }
        cmPrefix = temp;
        if (cmPrefix == "")
        {
            return "";
        }
    }
    return cmPrefix;
}

// Optimum Solution
string longestCommonPrefixOptimal(vector<string> &strs)
{
    if (strs.empty())
        return ""; // Handle empty input case

    string cmPrefix = strs[0];
    int n = strs.size();

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        int minLength = std::min(cmPrefix.length(), strs[i].length());

        while (j < minLength && cmPrefix[j] == strs[i][j])
        {
            j++;
        }

        // Update the common prefix to the new matched length
        cmPrefix = cmPrefix.substr(0, j);

        // If at any point the common prefix is empty, return ""
        if (cmPrefix.empty())
        {
            return "";
        }
    }

    return cmPrefix;
}

int main()
{
    // vector<string> st = {"anticipate", "antique", "antibody", "anticipation", "antigen",
    //                      "antidote", "antique", "antisocial", "antenna", "anthem",
    //                      "antonym", "anterior", "antagonist", "antiperspirant", "antifreeze",
    //                      "antique", "antiquated", "anticipatory", "antiseptic", "antiquity",
    //                      "antitrust", "antihero", "antivirus", "antiquark", "antipathy",
    //                      "antigenic", "ant", "antifungal", "antiseptics", "antioxidant",
    //                      "antitrust", "antivirus", "antibacterial", "antiquing", "antiperspirants",
    //                      "anticoagulant", "antigravity", "antibiotic", "antiparticle", "anticyclone",
    //                      "antigen", "antiperspirant", "antiviral", "antiproton", "antineutrino",
    //                      "anticipatory", "antiquity", "ant", "antifreeze", "antibody"};
    vector<string> st = {"ab", "a"};
    cout
        << "Longest common prefix: " << longestCommonPrefix(st) << endl;
    return 0;
}