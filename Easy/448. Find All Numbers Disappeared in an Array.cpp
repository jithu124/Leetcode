//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        for(int i = 0 ; i < n ; i++)
        {
            int correct_index = abs(nums[i])-1;
            nums[correct_index] = -abs(nums[correct_index]);//the missing number as an index will not be negative. Eg if 5 is missing, then the number at nums[5] will be positive. This will be later checked to find the missing numbers.
        }
        
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i]>0)
            {
                res.push_back(i+1);
            }
        }
        return res;
    }
};

