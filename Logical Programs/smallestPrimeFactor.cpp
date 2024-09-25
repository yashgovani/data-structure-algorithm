// write a program to find prime factorisation of number using sieve
#include <bits/stdc++.h>
using namespace std;

// Function to preprocess smallest prime factors using Sieve of Eratosthenes
void sieveOfEratosthenes(int n, vector<int> &spf)
{
    // Initializing the spf for every number to be itself
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    // Sieve of Eratosthenes to find smallest prime factor for every number
    for (int i = 2; i * i <= n; i++)
    {
        if (spf[i] == i)
        { // i is a prime
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                { // Mark the smallest prime factor
                    spf[j] = i;
                }
            }
        }
    }
}

// Function to get prime factorization using the spf array
vector<int> getPrimeFactorization(int num, const vector<int> &spf)
{
    vector<int> factors;
    while (num != 1)
    {
        factors.push_back(spf[num]);
        num /= spf[num];
    }
    return factors;
}

int main()
{
    int N = 100000;
    vector<int> spf(N + 1);
    sieveOfEratosthenes(N, spf);
    int num = 1024;
    vector<int> factors = getPrimeFactorization(num, spf);

    cout << "Prime factorization of " << num << ": ";
    for (int factor : factors)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
