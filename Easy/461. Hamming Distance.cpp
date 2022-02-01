//https://leetcode.com/problems/hamming-distance/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0,n=32;
        
        while(n)
        {   

            if((int)(x&1) != (int)(y&1))
            {   
                count++;
            }
            
            x=x>>1;
            y=y>>1;
            n--;
                
        }
        return count;
    }
};


