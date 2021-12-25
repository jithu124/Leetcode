https://leetcode.com/problems/contains-duplicate-iii/

class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        set<int> s;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            
            auto it = s.find(nums[i]);
            it = s.lower_bound(nums[i]);
            if((it!=s.end())&&(llabs((long long)(*it)-(long long)nums[i])<=t))
                return true;
            
            if(it!=s.begin())
            {
                auto it2 = --it;
                if(llabs((long long)(*it2)-(long long)nums[i])<=t)
                    return true;
            }
            s.insert(nums[i]);
            
            if(s.size()>k)
                s.erase(nums[i-k]);
            
            
            
        }
        
        
        return false;
        
    }
};