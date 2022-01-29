https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res=arr;
        
        int n =arr.size();
        int greatest = arr[n-1];
        int i;
        res[n-1]=-1;
        
        for(i=n-2;i>=0;i--)
        {
            res[i]=greatest;
            if(arr[i]>greatest)
                greatest=arr[i];
        }
        
        return res;
        
    }
};
