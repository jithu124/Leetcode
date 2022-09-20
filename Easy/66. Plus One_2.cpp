https://leetcode.com/problems/plus-one/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(),i=n-1;
        while(i>=0)
        {
            if(digits[i]< 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i]=0;
            }
            i--;
        }
        vector<int> res(n+1,0);
        res[0] = 1;
        return res;
        
        
    }
};