//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size(),i, res=0;
        if(n==2 and (nums[1]>nums[0]))
                return 1;
        for(i=0;i<n-2;i++)
        {   
            if((nums[i+1]>nums[i]) and (nums[i+2]<nums[i+1]))
            {
                res=i+1;
                break;
            }
            
            if(((i+2)==n-1)  and nums[i+1]>nums[i])
                return i+2;
        }
        
        
        return res;
    }
};