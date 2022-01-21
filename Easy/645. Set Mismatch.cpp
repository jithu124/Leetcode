https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        long sum = 0;
        int n = nums.size();
        vector<int> n1(n,0);
        int first = 0,second = 0;
        for(int i = 0; i < n;i++)
        {
            if(n1[nums[i]-1]==0)
            {
                n1[nums[i]-1]=1;
            }
            else
            {
                first = nums[i];
            }
            sum +=nums[i];
        }
        
        second = (n*(n+1)/2)-(sum-first);
        return vector<int>{first,second};

        
     
    }
};
