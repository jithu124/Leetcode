//https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int start=0,result=0,mid=0,end=num;
        bool flag=false;
        
        if(num==1)
        {
            flag=true;
        }
        else
        {
        
            
            
            while(start<=end)
            {
            
                mid=(end+start)/2;

                if((long long)mid*mid==num)
                {
                    result=mid;
                    flag = true;
                    break;
                }

                

                if((double)mid*mid < num)
                {
                    start=mid+1;
                    result=mid;
                }

                else
                {
                    end=mid-1;
                    
                }
            }
            
        }
        
        return flag;
        
    }
        
    
};
