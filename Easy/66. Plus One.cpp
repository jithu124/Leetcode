//https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int num = n;
        int carry = 1;
        int flag =0;
        for(int i = n-1;i>=0;i--)
        {
            auto temp = digits[i];
            temp+=carry;
            digits[i]=temp%10;
            if((i==0)&&(digits[i]==0))
            {
                flag=1;
            }
            if(temp<10)
            {
                break;
            }
        }
        vector<int> unit = {1};
        vector<int> res;       
        if(flag==1)
        {
            unit.insert(unit.end(),digits.begin(),digits.end());
            return unit;
        }
        
        return digits;
        
    }
};