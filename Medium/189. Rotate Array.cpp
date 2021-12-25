https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n  = nums.size();
        k = k%n;
        if((n==1)||(k==0))
            return;
        
        
    int num = n;
    int current = nums[0],index=0,temp2;
    int prev = 0;    
    while(num>0)
    {   
        index = (index+k)%n;
        temp2 = nums[index];
        nums[index] = current;
        cout<<nums[index]<<" ";
        current = temp2;
        num--;
        if(index==prev)
        {   prev++;
            index = prev;
            current = nums[prev];    
            
        }
        
    }
        
    }
};