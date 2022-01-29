https://leetcode.com/problems/maximum-69-number/submissions/

class Solution {
public:
    int maximum69Number (int num) {
        int max=num;
        int temp=num,k=0,dig,temp2;
        while(num!=0)
        {
            dig=num%10;
            num=num/10;
            temp2=temp;
            if(dig==6)
            {
              temp=temp+3*pow(10,k);  
            }
            if(temp>max)
            {
                max=temp;
            }
            temp=temp2;
            k++;
        }
        
        return max;
        
    }
};

