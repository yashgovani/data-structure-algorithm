// Write a program for best time to buy and sell the stock
#include <bits/stdc++.h>
using namespace std;

// Best Time to Buy and Sell Stock
int maxProfit(vector<int> &prices)
{
    int minimum = prices[0];
    int profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        int cost = prices[i] - minimum;
        profit = max(profit, cost);
        minimum = min(minimum, prices[i]);
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 4, 6, 3};
    cout << "Maxx Profit we can generate: ";
    cout << maxProfit(prices);
    return 0;
}