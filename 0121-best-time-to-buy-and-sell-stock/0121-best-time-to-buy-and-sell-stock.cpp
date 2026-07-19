class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro=0;
        int current=prices[0];
        for(int i=1; i<prices.size(); i++){
            current=min(current,prices[i]);
            maxPro=max(maxPro,prices[i]-current);
        }
        return maxPro;
        
    }
};