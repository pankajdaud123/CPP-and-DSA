 int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int j = i + 1;
        int ans = 0;
            while (j < n ) {
                if (ans < prices[j] - prices[i]) {
                    ans = prices[j] - prices[i];
                    j++;
                }
                else{
                j++;
                }
                i++;
            }
        return ans;
    }