https://leetcode.com/problems/search-in-rotated-sorted-array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1,mid;
        
        if(nums.size() == 0)
        {
            return -1;
        }
        
        while((l<r) && (nums[l]>=nums[r]))
        {
            mid = (l+r)/2;
            
            if(nums[mid] > nums[r])
            {
                l = mid+1;
            }
            else
            {
                r = mid;
            }
        }
        
        int pivot = l;
        cout<<"pivot is "<<pivot<<endl;

        l = 0, r = pivot - 1;
        while(l<r)
        {
             mid = (l+r)/2;
            

            if (nums[mid] < target)
            {
                l = mid +1;
            }
            else
            {
                r = mid;
            }
        }
        
        if(nums[l] == target)
        {
            return l;
        }
        
        l = pivot, r = nums.size() - 1;
        while(l<r)
        {
            mid = (l+r)/2;
            
            if (nums[mid] < target)
            {
                l = mid +1;
            }
            else
            {
                r = mid;
            }
        }
        
        if(nums[l] == target)
        {
            return l;
        }
        
        
        
        return -1;
            
    }
};