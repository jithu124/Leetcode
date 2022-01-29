https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> result;
        int n = prices.size(),i,j,temp;
        for(i =0;i<n;i++)
        {       temp=prices[i];
            for(j=i+1;j<n;j++)
            {
                if(prices[j]<=prices[i])
                {
                    temp=prices[i]-prices[j];
                    break;
                }
            }
          result.push_back(temp);
        }
        
        
        return result;
    }
};

