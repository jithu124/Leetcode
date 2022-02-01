//https://leetcode.com/problems/perfect-number/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int i=0,temp=1; 
        
        
        
        for(i=2;i*i<=num;i++)
        {
            if(num%i==0)
            {   temp=temp+i+(num/i);
            
                        if(i==num/i)
                        {
                            temp-=i;
                        }
            
             }
        }
        
        
        
    
        
    
    
    return temp==num and num>1;
    }
    
    
    
};
