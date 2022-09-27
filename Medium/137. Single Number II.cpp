//https://leetcode.com/problems/single-number-ii
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
    int n = nums.size(), i = 0;
    while(i < n - 3)
    {
        if((nums[i] == nums[i+1]) && (nums[i+1] == nums[i+2]))
        {
             i +=3;
        }
        else
        {
            return nums[i];
        }
    }
        
    return  nums[n-1];   
        
    }
};

/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {        
    int count[32] = {0};int n = nums.size();
        int res = 0;
    
    for(int i = 0; i< 32; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            count[i] += (nums[j]>>i)&1;
        }
        res |= (count[i]%3)<<i;
    }
     
    return res;
    }       
};
*/