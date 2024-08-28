/*A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.*/
#include <iostream>
#include <vector>
using namespace std;

// Factorial of N numbers
long long fact(long long n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * fact(n - 1);
}

vector<long long> factorialNumbers(long long n)
{
    // Write Your Code here
    vector<long long> arr;
    for (int i = 1; i < n; i++)
    {
        long long num = fact(i);
        if (num <= n)
        {
            arr.push_back(num);
            continue;
        }
        break;
    }
    return arr;
}

int main()
{
    long long n;
    vector<long long> arr;
    cin >> n;
    arr = factorialNumbers(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}