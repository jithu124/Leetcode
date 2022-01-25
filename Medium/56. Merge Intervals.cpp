https://leetcode.com/problems/merge-intervals/

bool compare(vector<int>a,vector<int> b)
{
    return a[0] < b[0];
}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),compare);
        int n = intervals.size();
        vector<vector<int>> res;
        int i = 0,j = 0;
        
        while(i<n)
        {   vector<int> current = intervals[i];
            for(j=i+1;j<n;j++)
            {
                if((intervals[j][0]>=current[0]) && (intervals[j][0]<=current[1]))
                {
                    current[1] = intervals[j][1] > current[1] ? intervals[j][1]:current[1];
                }
                else
                {
                    j--;
                    break;
                }
            }
            i = j+1;
            res.push_back(current);
        }
        return res;
        
    }
};

