https://leetcode.com/problems/subarray-product-less-than-k/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),i=0,current_prod=1,count=0;
        for(int j=0;j<n;j++)
        {  
            current_prod *= nums[j];
            while((current_prod>=k)&&(i<=j))
            {
               current_prod = current_prod/nums[i];
                i++;
            }
            cout<<current_prod<<" ";
            if(current_prod<k)
            {
                count+= j-i+1;
            }
                
            
        }
                  
        return count;
        
    }
};