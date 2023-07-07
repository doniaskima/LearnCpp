
// %y solution but complexity baddd 😔
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        for (int i = 0; i < prices.size(); i++) {   
            int initial = prices[i];
            for (int j = i + 1; j < prices.size(); j++) {  
                int output = prices[j] - initial;
                if (output > maximum) {
                    maximum = output;
                }
            }
        }
        return maximum;
    }
};

//Another solution 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;
        int op = 0;
        int pist = 0;
        
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            pist = prices[i] - lsf;
            if(op < pist){
                op = pist;
            }
        }
        return op;
    }
};