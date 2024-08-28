// Write a program that can take two variable a and b and retuen a^b
#include <iostream>
using namespace std;

int findExponential(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    if (b % 2 == 0)
    {
        return findExponential(a, b / 2) * findExponential(a, b / 2);
    }
    else
    {
        return a * findExponential(a, b / 2) * findExponential(a, b / 2);
    }
}

int main()
{
    int a, b;
    cout << "value of a: ";
    cin >> a;
    cout << "value of b: ";
    cin >> b;
    cout << "a^b: " << findExponential(a, b);
    return 0;
}