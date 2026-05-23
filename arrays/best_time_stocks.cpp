#include <bits/stdc++.h>
using namespace std;

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
