// Write a program that return the number of prime number lies till n
#include <bits/stdc++.h>
using namespace std;

int countOfPrime(vector<int> arr, int size)
{
    int count = 0;
    for (int i = 2; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count += 1;
        }
    }
    return count;
}

int countPrimes(int n)
{
    vector<int> primes(n, 1);
    for (int i = 2; i * i < n; i++)
    {
        if (primes[i] == 0)
        {
            continue;
        }
        else
        {
            int j = i;
            while (i * j < n)
            {
                primes[i * j] = 0;
                j++;
            }
        }
    }
    return countOfPrime(primes, n);
}
int main()
{

    cout << "Number of prime lies before: " << countPrimes(30);
    return 0;
}