class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <2)
            return 0;
        int back = 0, forward =1;
        int profit = 0;
        while(forward < prices.size()) {
            if(prices[forward] < prices[back]){
                back = forward;
                forward = back+1;
            }
            else {
                while(forward+1<prices.size() && prices[forward+1]>prices[forward]){
                    forward++;
                }
                if(prices[forward]>=prices[back]){
                    profit = profit+prices[forward]-prices[back];
                    back = forward+1;
                    forward = back+1;
                }    
            }       
        }
        return profit;
    }
};
