//https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        set <vector<int>> s;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i,j,k,temp;
        for(i = 0;i<(int)n-2;i++)
        {
            j = i+1;k = n-1;
            
            while(j<k)
            {
                temp = nums[i]+nums[j]+nums[k];
                if(temp==0)
                {
                    s.insert({nums[i],nums[j],nums[k]});
                    j++;
                }
                else if(temp<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        
        for(auto a:s)
        {
            result.push_back(a);
        }
        return result;
        
    }
};