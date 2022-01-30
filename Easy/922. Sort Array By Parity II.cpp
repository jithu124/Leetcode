https://leetcode.com/problems/sort-array-by-parity-ii/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int n = A.size();
        vector<int> res(n);
        int i=0,j=1,m;
        
        for(m=0;m<n;m++)
        {
            if(A[m]%2==0)
            {
                res[i]=A[m];
                i+=2;
            }
            else{
                res[j]=A[m];
                j+=2;
            }
            
            
        }
        
        
        return res;
        
    }
};


