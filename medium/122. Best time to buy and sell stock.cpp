class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        int ans=0;
        if(prices.size()==0)return 0;
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            maxprofit=prices[i]-minprice;
            if(maxprofit>0)
            {
                ans+=maxprofit;
                minprice=prices[i];
            }
        }
        return ans;
    }
};
