#include <bits/stdc++.h>
using namespace std;

string binaryConversion(int n)
{
    string res = "";
    if (n == 0)
        return "0"; // Special case for 0

    while (n > 0)
    {
        res += (n % 2 == 1) ? '1' : '0'; // Append '1' or '0'
        n /= 2;
    }
    reverse(res.begin(), res.end()); // Reverse the string to get correct binary form
    return res;
}

int decimalConversion(string x)
{
    int length = x.size();
    int sum = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        if (x[i] == '1')
            sum += pow(2, (length - (i + 1)));
    }
    return sum;
}

int main()
{
    int decimal = 13;
    string binary = "1101";
    cout << "Binary of " << decimal << " is: " << binaryConversion(decimal);
    cout << "Decimal of " << binary << " is: " << decimalConversion(binary);
    return 0;
}
