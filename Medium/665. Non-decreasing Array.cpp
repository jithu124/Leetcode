https://leetcode.com/problems/non-decreasing-array/

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();bool out;
        int flag,i,index;
        flag = 0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                flag+=1;
                index = i+1;
            }
        }
        std::cout<<index; 
        std::cout<<flag; 
        out = false;
        if(flag==0)
            out= true;
        else if(flag==1)
        {
            int l=INT_MIN,r=INT_MAX;
            if(index>1)
               l=nums[index-2];
            if(index+1<n)
                r=nums[index+1];
            if(l<=nums[index] or r>=nums[index-1])
                return true;
        } 
        else
        {out = false;}
        
        return out;
    }
};