https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int l = 0, r = nums.size()-1,m;
        
        while(l<r)
        {
            m = (l+r)/2;
            
            if(nums[m] < target)
            {
                l = m+1;
            }
            else
            {
                r = m - 1 ;
            }
        }
        
        return nums[l] < target ? l+1 : l ;
        
    }
};