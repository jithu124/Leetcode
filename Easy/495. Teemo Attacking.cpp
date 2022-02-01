//https://leetcode.com/problems/teemo-attacking/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        
        vector<int> res;
        
        int n = timeSeries.size(),sum=0,i;
        if(n==0)
            return 0;
        for( i=0;i<n;i++)
        {   
         res.push_back(timeSeries[i]+duration);
         
        }
        sum=res[0]-timeSeries[0];
        for(i=1;i<n;i++)
        {
            if(res[i]-res[i-1]>duration)
                sum+=duration;
            else
                sum+=res[i]-res[i-1];
        }
        return sum;
        
    }
};

