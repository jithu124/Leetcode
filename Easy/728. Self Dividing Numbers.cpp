https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        int i=0,flag=1; vector<int> res;
        for(i=left;i<=right;i++)
        {
            int num=i;
            
            flag=1;
            while(num!=0)
            {
                int dig;
                dig = num%10;
                num=num/10;
                
                if(dig==0 or i%dig!=0)
                {
                    flag=0;
                    break;
                }
                
            }
            
            if(flag==1)
            {
               res.push_back(i); 
            }
        }
        
        return res;
    }
};


