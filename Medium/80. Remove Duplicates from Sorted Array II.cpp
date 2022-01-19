https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 2;
        if(n<=2)
        {
            return n;
        }
        else
        {
            
            for(int i = 2;i<n;i++)
            {
                if(nums[k-2]!=nums[i])
                {
                    nums[k] = nums[i];
                    k++;
                }
            }
        }
        
        return k;
        
    }
};
