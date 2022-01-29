https://leetcode.com/problems/mean-of-array-after-removing-some-elements/

class Solution {
public:
    double trimMean(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int n = arr.size(),i;
        
        int init = 0.05*n;
        double sum=0;
        
        for(i=init; i<n-init;i++)
        {
            sum+=arr[i];
        }
        sum/=(n-2*init);
        
        return sum;
        
    }
};

