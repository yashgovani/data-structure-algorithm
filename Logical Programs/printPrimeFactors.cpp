// write a program to print all the prime factor of number
// factor means a number that can divide a number
#include <bits/stdc++.h>
using namespace std;

void printPrimeFactor(vector<int> prime, int num)
{
    cout << "Prime factors of " << num << " are: ";
    for (auto it : prime)
    {
        cout << it << " ";
    }
    cout << endl;
}

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// first way
void checkPrimeFactor(int n)
{
    vector<int> primes;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (checkPrime(i))
            {
                primes.emplace_back(i);
            }
            if ((n / i) != i && checkPrime(n / i)) // Check both factors, and ensure not adding duplicates.
            {
                primes.emplace_back(n / i);
            }
        }
    }

    // Check if the number itself is prime
    if (checkPrime(n))
    {
        primes.emplace_back(n);
    }

    printPrimeFactor(primes, n);
}

// second way
void checkForPrimeFactors(int n)
{
    vector<int> primes;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            primes.emplace_back(i);
            while (n % i == 0)
            {
                n = n / i;
            }
        }
    }
    if (n != 1)
        primes.emplace_back(n);
    printPrimeFactor(primes, n);
}

int main()
{
    checkPrimeFactor(91);
    cout << endl;
    checkForPrimeFactors(37);
    return 0;
}
