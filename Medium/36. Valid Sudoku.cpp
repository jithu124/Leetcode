//https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row_check(9,{0,0,0,0,0,0,0,0,0});
        vector<vector<int>> col_check(9,{0,0,0,0,0,0,0,0,0});
        vector<vector<int>> cell_check(9,{0,0,0,0,0,0,0,0,0});
        
        for(int i = 0;i < 9; ++i)
        {
            for(int j = 0; j < 9; ++j)
            {   
                if(board[i][j] != '.')
                {
                    int value = board[i][j] -'1';
                    int cell_map = 3*(i/3)+j/3;
                    if((row_check[value][i] == 1) || (col_check[value][j] == 1) || (cell_check[value][cell_map] == 1))
                    {
                        return false;
                    }
                    
                     row_check[value][i] = 1;
                     col_check[value][j] = 1;
                     cell_check[value][cell_map] = 1;
                    
                }
            }
        }
        return true;
        
    }
};