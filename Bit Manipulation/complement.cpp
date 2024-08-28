#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // This program is to find 1's complement;
    int n;
    cin >> n;

    int ans = n, mask = 0;
    while (ans != 0)
    {
        ans = ans >> 1;
        mask = (mask << 1) | 1;
    }
    cout << "ans is: " << (~n & mask);
}