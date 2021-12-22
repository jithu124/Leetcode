//https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n =nums.size(),i,j,max,max2=INT_MIN,prod=1;
        
        if (n==1)
            return nums[0];
        for(i=0;i<n;i++)
        {   prod=nums[i];
            max=nums[i];
         
            for(j=i+1;j<n;j++)
            {
               prod*=nums[j];
                if(prod>max)
                    max=prod;
                
                
            }
         if(max2<max)
             max2=max;
            
        }
        return max2;
    }
};