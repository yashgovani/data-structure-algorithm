#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int user_input;
    cout << "Enter the number you want to reverse: ";
    cin >> user_input;
    int ans = 0, i = 0;
    while (user_input != 0)
    {
        int digit = user_input % 10;
        if ((ans * 10 > INT_MAX) || (ans * 10 < INT_MIN))
        {
            return 0;
        }
        ans = digit + (10 * ans);
        user_input /= 10;
        i++;
    }
    cout << ans;
}
