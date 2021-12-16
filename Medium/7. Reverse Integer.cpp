//https://leetcode.com/submissions/detail/405299778/

#define M INT_MAX/10
#define N INT_MIN/10
class Solution {
public:
    int reverse(int x) {
        
        int rev=0;
        while(x!=0)
        {
           
            
            if(rev> M) return 0;
            if(rev<N) return 0;
            rev=rev*10+x%10;;
            x/=10;
            
            
        }
        return rev;
    }
};