#include <iostream>
using namespace std;

int findFibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 && n == 2)
    {
        return 1;
    }
    return findFibonacci(n - 1) + findFibonacci(n - 2);
}

int findFibonacciLoop(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n <= 2)
    {
        return 1;
    }

    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n = 0;
    cin >> n;
    cout << findFibonacci(n);
    return 0;
}