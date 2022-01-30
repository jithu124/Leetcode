https://leetcode.com/problems/sort-array-by-parity/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int> odd;
      
        
        int n = A.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(A[i]%2!=0)
            {
                odd.push_back(A[i]);
                    
            }
            else
            {
                even.push_back(A[i]);
            }
        }
        n=odd.size();
        i=0;
        while(n!=0)
        {
            even.push_back(odd[i]);
            i++;
            n--;
        }
        
        
        return even;
    }
};

