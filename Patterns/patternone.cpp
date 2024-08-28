#include <iostream>
using namespace std;

void nNumberTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << j - i + 1 << " ";
        }
        cout << endl;
    }
}

void nStarTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void nStarTriangleReverse(int n)
{
    // Write your code here.
    for (int i = n; i > 0; i--)
    {
        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void nStarDiamond(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < (2 * i - 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void nStarTriangleTwo(int n)
{
    // Write your code here.
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void nBinaryTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
}

void numberCrown(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "* ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void nNumberTriangleIncrease(int n)
{
    // Write your code here.
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

void nLetterTriangle(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void nLetterTriangleReverse(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + (n - i); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void alphaRamp(int n)
{
    char ch = 'A'; // Initialize ch outside the loop

    for (int i = 0; i < n; i++, ch++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void alphaHill(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        // character
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= (2 * i + 1); j++)
        {
            cout << ch << " ";
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void alphaTriangle(int n)
{
    // Write your code here.
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = 'A';
        for (int j = n - 1; j >= i; j--)
        {
            cout << char(ch + j) << " ";
        }
        cout << endl;
    }
}

void symmetry(int n)
{
    // Write your code here.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void symmetryRev(int n)
{
    // Write your code here.
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int end = i;
        if (i > n)
            end = 2 * n - i;
        for (int j = 1; j <= end; j++)
        {
            cout << "* ";
        }
        for (int j = 1; j <= 2 * (n - end); j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= end; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void getStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == (n - 1))
            {
                cout << "* ";
            }
            else if (j == 0 || j == (n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void getNumberPattern(int n)
{
    // Write your code here.
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    getNumberPattern(n);
    return 0;
}