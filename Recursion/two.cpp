// Print Name N times using Recursion
#include <iostream>
using namespace std;

void printName(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "GFG ";
    printName(n - 1);
}

int main()
{
    int n;
    cin >> n;
    printName(n);
    return 0;
}