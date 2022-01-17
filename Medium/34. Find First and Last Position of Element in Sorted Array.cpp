https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int start_index = -1,end_index = -1;
        int start = 0,end = nums.size()-1;
        int mid;
       
        while(start <= end)
        {       
            int mid = (start+end)/2;
            if(nums[mid]==target)
            {
                int found = mid;

                start_index = mid;
                end_index = mid;
                while((start<start_index)&&(nums[start_index]==nums[start_index-1]))
                {
                    start_index--;
                }
                while((end>end_index)&&(nums[end_index]==nums[end_index+1]))
                {
                    end_index++;
                }
                break;
            }
            else if(target>nums[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
       
            
        }
        
      
        return vector<int>{start_index,end_index};
             
    }
};

