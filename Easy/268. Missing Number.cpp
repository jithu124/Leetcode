https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int max;long sum = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++)
        {
            sum +=nums[i];
            max = nums[i]>max?nums[i]:max;
        }
        if(n == max+1)
        {
            return max+1;//when no element is missing in [0,max], the next element is missing
        }
        
        return (max*(max+1)/2) - sum;//sum of elements from 0 to max -  sum of elements in array
        
    }
};
