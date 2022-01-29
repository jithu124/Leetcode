https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
            
            int n = arr.size(),i=0;
        
        vector<int > res;
        
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
        i=0;
        
        while(i<n-1)
        {  int freq=count(arr.begin(),arr.end(),arr[i]);
            res.push_back(freq);
         i=i+freq;
           
         
         
         
        }
        
        if(arr[n-1]!=arr[n-2])
        {
            res.push_back(1);
        }
        
        sort(res.begin(),res.end());
            
        n = res.size();
        cout<<n<<endl;
        
        for(i=0;i<n-1;i++)
        {
            if(res[i]==res[i+1])
                return false;
        }
        
        return true;
        
    }
};

