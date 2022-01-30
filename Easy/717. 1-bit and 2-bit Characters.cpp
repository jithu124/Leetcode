https://leetcode.com/problems/1-bit-and-2-bit-characters/

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int n = bits.size();
        int i=0;
        while(i<n-1)
        {
            i = bits[i]==1?i+2:i+1;
        }
        
        return i==n-1;
        
    }
};

