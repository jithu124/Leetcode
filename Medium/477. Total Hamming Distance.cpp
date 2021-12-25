https://leetcode.com/problems/total-hamming-distance/

int dist(int x,int y)
{
    int z=x^y;
        int c=0;
    while(z!=0)
    {
        if((z&1)==1)
            c++;
        z>>=1;
    }
    
    return c;
}


class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        int a[32],i,distance=0,n=nums.size();
        
        for( i =0;i<32;i++)
            a[i]=0;
        
       
        for( i =0;i<n;i++)
        {   int x=1;
            for(int j=0;j<32;j++)
            {   
                if(x&nums[i])
                {
                    a[j]+=1;
                }
                
                if(x>nums[i])
                {
                    break;
                }
                
                x=x*2;
            }
            
        }
        
        distance=0;
        
        for( i =0;i<32;i++)
        {
            distance +=a[i]*(n-a[i]);
        }
        return distance;
    }
};