https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        vector<vector<int>> result;
        set <vector<int>> s;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i,j,k,temp;
        int max = INT_MAX,diff = INT_MAX;
        for(i = 0;i<(int)n-2;i++)
        {
            j = i+1;k = n-1;
            
            while(j<k)
            {
                temp = nums[i]+nums[j]+nums[k];
                if(temp==target)
                {
                    return target;
                }
                else if(temp<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
                
                if(abs(temp-target)<diff)
                {
                    diff = abs(temp-target);
                    max = temp;
                }
                
                
            }
        }
        
        return max;
        
    }
};