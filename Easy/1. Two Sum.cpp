//https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> umap;
        for(int i = 0;i<nums.size();i++)
        {
           umap[nums[i]]=target-nums[i];
        }
        vector<int> res;
        int found = 0;
        for(auto x:nums)
        {
            if(find(nums.begin(),nums.end(),umap[x])!=nums.end())
            {      
                if(x==umap[x])
                {
                    if(count(nums.begin(),nums.end(),x)>1)
                    {
                        auto start = find(nums.begin(),nums.end(),x);
                        auto first = start - nums.begin();
                        auto second = find(start+1,nums.end(),umap[x]) - nums.begin();
                        res.push_back(first);
                        res.push_back(second);
                        found = 1;
                        return res;
                    }
                    
                }
                else
                {
                auto first = find(nums.begin(),nums.end(),x) - nums.begin();
                auto second = find(nums.begin(),nums.end(),umap[x]) - nums.begin();
                res.push_back(first);
                res.push_back(second);
                found=1;
                cout<<"nums"<<x<<" "<<umap[x]<<endl;
                cout<<"found"<<first<<" "<<second;
                break;
                }
            }
            //cout<<x<<" "<<umap[x];
            
        }
        if(found==0)
        {   res = {0,0};
            return res;
        }
        
        return res;
    }
};