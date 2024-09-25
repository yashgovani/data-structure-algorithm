// write a program to find all the divisors of number
#include <bits/stdc++.h>
using namespace std;

void printDivisors(vector<int> divisor, int num)
{
    cout << "Divisors of " << num << " are: ";
    for (auto it : divisor)
    {
        cout << it << " ";
    }
    cout << endl;
}

void findDivisors(int n)
{
    vector<int> primes;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            primes.emplace_back(i);

            if ((n / i) != i)
            {
                primes.emplace_back(n / i);
            }
        }
    }

    printDivisors(primes, n);
}

int main()
{
    findDivisors(36);
    cout << endl;
    findDivisors(37);
    return 0;
}