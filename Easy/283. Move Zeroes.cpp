//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        for(auto x:nums)
        {
            if(x)
            {
                nums[start++]=x;
            }
        }
        
        for(int i = start;i<nums.size();i++)
        {
            nums[i]=0;
        }
        
        
    }
};