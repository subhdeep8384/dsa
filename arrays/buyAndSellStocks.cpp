#include <iostream>
#include <vector>
using namespace std;

int bestProfit(vector<int> &prices)
{
    int minPriceBehind = INT_MAX;
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        minPriceBehind = min(minPriceBehind, prices[i - 1]);
        int profit = prices[i] - minPriceBehind;
        maxProfit = max(maxProfit, profit);
    }
    return maxProfit;
}

int main() {}