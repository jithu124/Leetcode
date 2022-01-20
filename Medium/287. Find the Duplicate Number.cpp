https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int res = 0;
        vector<int> a(n-1,0);
        
        for(int i = 0; i < n; i++)
        {
            if(a[nums[i]-1]==1)
            {
                 res = nums[i];
                 break;
            }
            else
            {
                a[nums[i]-1]=1;
            }
        }
        return res;
        
    }
};
