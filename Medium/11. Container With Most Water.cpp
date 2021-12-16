//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
       int i = 0,j=height.size()-1,mx=INT_MIN;
    
        while(i<j)
        {
            
            if(height[i]>height[j])
            {
                mx = max(mx,height[j]*(j-i));
                    j--;
            }
            else
            {
                mx = max(mx,height[i]*(j-i));
                i++;
                
            }
            
            
        }
        
        return mx;
        
    }
};