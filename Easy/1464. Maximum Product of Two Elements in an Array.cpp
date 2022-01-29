https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int current=0, previous=0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i]>=current)
            {
                previous = current;
                current = nums[i];
            }
            else if(nums[i]>=previous)
            {
                previous = nums[i];
            }
            else
            {}
        }
        return (current-1)*(previous-1);
    }
};

/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};*/

/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n = nums.size();
        int i,j;
        int max=INT_MIN;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((nums[i]-1)*(nums[j]-1)>max)
                {
                    max = (nums[i]-1)*(nums[j]-1);
                }
            }
        }
        
        return max;
    }
};
*/

