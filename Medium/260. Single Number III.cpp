//https://leetcode.com/problems/single-number-iii
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        int i = 0;
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        while(i < n - 1)
        {
            if(arr[i] != arr[i+1])
            {
                res.push_back(arr[i]);
                i++;
                if(res.size()==2)
                {
                    return res;
                }
            }
            else
            {
               i +=2; 
            }
            
        }
        
        if(res.size() == 0)
        {
          res.push_back(arr[n-2]);
          res.push_back(arr[n-1]);
        }
        else
        {
          res.push_back(arr[n-1]); 
        }
        
        return res;
        
    }
};