https://leetcode.com/problems/sum-of-square-numbers/

class Solution {
public:
    bool judgeSquareSum(int c) {
        double z;
        int mid,start=0,end;
        if(c==0)
            return true;
        
        for(int i=0;i<=sqrt(c);i++)
        {
            //temp=i*i;
            z=c-i*i;
            start=0;
            end=z;
            while(start<=end)
            {
                mid=(start+end)/2;
                
                if((double)mid*mid==z)
                {  return true;
                 }
                
                if((double)mid*mid<z)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
            // cout<<"*"<<temp<<"+"<<z<<(int)z<<"**"<<floor(z)<<endl;
            // if(z==floor(z))
            // {   //cout<<"*"<<temp<<"+"<<z<<(int)z<<"**"<<floor(z)<<endl;
            //     result=true;
            // }
        }
        return false;
    }
    
    
};