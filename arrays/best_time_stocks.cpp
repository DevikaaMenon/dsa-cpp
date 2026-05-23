#include <bits/stdc++.h>
using namespace std;

// LeetCode 121 — Best Time to Buy and Sell Stock
// Track the running minimum price; for each day compute the profit if sold
// today. Update global max profit and update the minimum if a new low is found.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int price : prices) {
            int todayProfit = price - minPrice;
            maxProfit = max(maxProfit, todayProfit);
            minPrice = min(minPrice, price);
        }
        return maxProfit;
    }
};
