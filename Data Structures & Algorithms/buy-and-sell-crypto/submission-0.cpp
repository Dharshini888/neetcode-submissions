class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(max<prices[j]-prices[i])
                max=prices[j]-prices[i];
            }
        }
        if(max>0)
        return max;
        else
        return 0;
    }
};
