https://leetcode.com/problems/robot-return-to-origin/

class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        int n= moves.length();
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U')
            {
                y+=1;
            }
            else if(moves[i]=='D')
            {
                y+=-1;
            }
            else if(moves[i]=='L')
            {
                x+=-1;
            }
            else
            {
                x+=1;
            }
        }
        if(x==0 and y==0)
            return true;
            
            
        return false;
    }
};

