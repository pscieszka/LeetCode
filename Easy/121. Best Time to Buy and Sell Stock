class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int x=0;
        for(int i=0; i < prices.size(); i++){

            if(prices[i]<prices[x]){
                x=i;
            }
            if(prices[i]-prices[x]>max){
                max = prices[i] - prices[x];
            }
        }
        return max;
    }
    };