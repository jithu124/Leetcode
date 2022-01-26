https://leetcode.com/problems/insert-interval/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();      
        int i=0,j;bool flag = false;
        vector<vector<int>>::iterator it = intervals.begin();
        while(i<n)
        {
            vector<int> current = intervals[i];
            if((newInterval[0]>=current[0]) && (newInterval[0]<=current[1]))
            {
                flag = true;
                current[1] = current[1] > newInterval[1]?current[1]:newInterval[1];
                intervals[i][1] = current[1];
            }
            else if((newInterval[0]<=current[0]) && (newInterval[1]>=current[0]))
            {
                flag = true;
                current[0] = newInterval[0];
                current[1] = current[1] > newInterval[1]?current[1]:newInterval[1];
                intervals[i][1] = current[1];
                intervals[i][0] = current[0];
            }
            else if(newInterval[0]<current[0] && newInterval[1]<current[0])
            {
                intervals.insert(intervals.begin()+i,newInterval);
                return intervals;
            }
            else
            {
                //
            }
            
            if(flag)
            {
                for(j = i+1; j < n; j++)
                {    vector<int> current2 = intervals[j];
                    if((current2[0]>=current[0]) && (current2[0]<=current[1]))
                    {
                 
                        current[1] = current[1] > current2[1]?current[1]:current2[1];
                        intervals[i][1] = current[1];
                    }
                    else
                    {
                        break;
                    }
                    
                }
                
                if(flag)
                {
                    intervals.erase(it+i+1,it+j);
                    return intervals;
                }
                
            }
            i++;
            
        }
       
        
        intervals.push_back(newInterval);
        return intervals;
    }
};