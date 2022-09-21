https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        double num = x;
        if((x<0)||((x>0) && (x%10==0)))
        {
            return false;
        }
        
        int div = 1;
        while(x/div >=10)
        {
            div *=10;
        }
        
        while(x!=0)
        {
            int left = x/div;
            int right = x%10;
            
            if(left != right)
            {
                return false;
            }
            
            x = x % div;
            x = x/10;
            div /= 100;
        }
        
        return true;
        
    }
};

//by reversing
class Solution {
public:
    bool isPalindrome(int x) {
        bool result=false; double temp=x;
            
        if(x<0)
            return false;
        
        double num =0;
            while(x!=0)
            {
                num=num*10+(x%10);
                x/=10;
            }
        if(num==temp)
        {
            result=true;
        }
        
        return result;
        
    }
};