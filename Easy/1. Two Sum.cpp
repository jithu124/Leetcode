//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> um;
        vector<int> res;
        for(int i = 0;i<nums.size();i++)
        {
            if(um.find(target-nums[i])!=um.end())//checking if second the two sum number is present in map
            {
                res.push_back(i);//store the index of first number in return vector
                res.push_back(um[target - nums[i]]);//store the index of second number
                break;
            }
            else
            {
                um[nums[i]] = i;//storing the index of an element in map
            }
        }
        return res;
        
    }
};