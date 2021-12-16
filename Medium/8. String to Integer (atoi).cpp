//https://leetcode.com/problems/string-to-integer-atoi/
class Solution {
public:
    int myAtoi(string str) {int i = 0, res = 0, sign = 1;
        while(i < str.size() and str[i] == ' ') i++;
        
        if(i < str.size() and str[i] == '-' or str[i] == '+')
            sign = str[i++] == '-' ? -1: 1;
    
        while(i < str.size() and isdigit(str[i])) {
            if(res > INT_MAX/10 or (res *10 > INT_MAX - (str[i] - '0')))
                return sign == 1 ? INT_MAX : INT_MIN;
            res = res*10 + (str[i++] - '0');
        }
        return sign *res;
        
        
    }
};