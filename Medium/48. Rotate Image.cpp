https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        
        int n = matrix.size();int start_col = 0,end_col = n-1;
        for(int i = 0; i < n;i++)
        {
            for(int j = i;j < n; j++)
            {
                swap(matrix[i][j],matrix[j][i]); //finding the transpose of the matrix
            }
        }
        
        while(start_col < end_col)
        {
            for(int row = 0; row < n; row++)
            {
                swap(matrix[row][start_col],matrix[row][end_col]);//swap colums from right and left
            }
            
            start_col++;
            end_col--;
        }
        
    }
};
