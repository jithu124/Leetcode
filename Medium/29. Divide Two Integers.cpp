https://leetcode.com/problems/divide-two-integers/


class Solution {
public:
    int divide(int dividend, int divisor) {
        
        long  divident_abs = abs(dividend);
        long  divisor_abs = abs(divisor);
        
        if (dividend==INT_MIN && divisor==-1) return INT_MAX;//boundary case
        if (dividend==INT_MAX && divisor== 1) return INT_MAX;//boundary case
        if (dividend==INT_MIN && divisor== 1) return INT_MIN;//boundary case
        if (divident_abs < divisor_abs) return 0;
		if (divident_abs == divisor_abs) return ((dividend<0)^(divisor<0)) ? -1 : 1;

        int res = 0, sign = ((dividend<0)^(divisor<0)) == 1 ? -1 : 1;
     
        
        
        while(divident_abs - divisor_abs >= 0)
        {
            int x = 0;
            
            while(divident_abs-(divisor_abs<<1<<x)>=0)
            {
                x++;
            }
            res+=(1<<x);
            divident_abs = divident_abs -(divisor_abs<<x);
            //cout<<"divident_abs:"<<divident_abs<<" divisor_abs: "<<divisor_abs<<endl;
        }
        
        return sign*res;
    }
};