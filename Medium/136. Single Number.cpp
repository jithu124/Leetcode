//https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int x : nums)
        {
            res ^= x;
        }
        
        return res;
        
    }
};


/*
//using unordered_set
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int x : nums)
        {
            if(s.find(x) != s.end())
            {
                s.erase(x);
            }
            else
            {
                s.insert(x);
            }
        }
        
        return *s.begin();
        
    }
};

//using unordered_map
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums)
        {
            if(mp.find(x) != mp.end())
            {
                mp[x] = mp[x]-1;
            }
            else
            {
                mp[x] = 1;
            }
        }
        
        for(int x : nums)
        {
            if(mp[x] == 1)
            {
                return x;
            }
            
        }
        
        return 0;
        
    }
};

*/