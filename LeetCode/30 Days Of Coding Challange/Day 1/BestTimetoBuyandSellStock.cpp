/*
Problem Link:
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?utm_source=instabyte.io&utm_medium=referral&utm_campaign=interview-master-100
*/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        int currProfit = 0;

        for (auto currPrice : prices)
        {
            minPrice = min(minPrice, currPrice);

            currProfit = (currPrice - minPrice);
            if (currProfit > maxProfit)
            {
                maxProfit = currProfit;
            }
        }
        return maxProfit;
    }
};