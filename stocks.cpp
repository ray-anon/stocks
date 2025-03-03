#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    if (prices.size() < 2) return 0;

    int minPrice = prices[0]; 
    int maxProfit = 0;       

    for (int i = 1; i < prices.size(); ++i) {
        int profit = prices[i] - minPrice;
        maxProfit = max(maxProfit, profit);
        minPrice = min(minPrice, prices[i]);
    }
    return maxProfit;
}

int main() {
    int n;
    cin >> n;
    vector<int> prices(n); 
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    int result = maxProfit(prices);
    cout << result << endl;
}
