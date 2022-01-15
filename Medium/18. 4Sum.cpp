https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        int i,j,k,l;
        long long temp1,temp2;
        int n = nums.size();
        for(i = 0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                k = j+1;
                l = n-1;
                while(k<l)
                {
                    temp1 = nums[i]+nums[j];
                    temp2 = nums[k]+nums[l];
                    
                    if( temp1 + temp2 == target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                    }
                    else if(temp1 + temp2 < target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
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