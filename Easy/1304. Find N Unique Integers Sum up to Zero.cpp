https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

class Solution {
public:
    vector<int> sumZero(int n) {
        int sum = 0;
        vector<int> res;
        while(n-1>0)
        {
            res.push_back(n-1);
                sum +=n-1;
                n--;
        }
        
        res.push_back(-sum);
        
        return res;
        
    }
};

/*
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        int i =0;
        for(i = 1; i<n/2+1;i++)
        {
            result.push_back(i);
            result.push_back(-i);
            
        }
        
        if(n%2!=0)
            result.push_back(0);
        
        
        return result;
        
    }
};
*/

