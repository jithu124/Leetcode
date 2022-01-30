https://leetcode.com/problems/peak-index-in-a-mountain-array/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n=arr.size(),index=0,i;
        
        for(i=0;i<n-2;i++)
        {
            if( (arr[i+1]>arr[i]) and(arr[i+2]<arr[i+1]))
            { 
                index=i+1;
                break;
            }
        }
        
        return index;
        
    }
};
