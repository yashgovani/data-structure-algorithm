#include <iostream>
#include <math.h>
using namespace std;

// Print 1 to N using Recursion
void printNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    printNumber(n - 1);
    cout << n << " ";
}

// Print N to 1
void printNumberReverse(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNumber(n - 1);
}

// Sum of first n terms
long long sumOfNTerms(long long n)
{
    if (n == 1)
    {
        return n;
    }
    return n * n * n + sumOfNTerms(n - 1);
}

int main()
{
    int n;
    long long m;
    cin >> n;
    cin >> m;
    printNumber(n);
    cout << endl;
    printNumberReverse(n);
    cout << endl;
    cout << sumOfNTerms(m);

    return 0;
}