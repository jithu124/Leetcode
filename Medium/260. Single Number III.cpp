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

/*
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2,0);
        int AxorB = 0;
        int firstonepos = 0;
        
        for(int x : nums)
        {
            AxorB ^= x;
        }
        
        for(int i = 0; i < 32; i++)
        {
            if(((AxorB >> i) & 1) ==1)
            {
                firstonepos = i;
            }
        }
        
        for(int x : nums)
        {
            if((( x >> firstonepos)&1) == 1)
            {
                res[0] ^= x;
            }
        }
        
        res[1] = res[0]^AxorB;
            
        
        return res;
        
    }
};
*/