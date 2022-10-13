https://leetcode.com/problems/longest-substring-without-repeating-characters
class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        int res = 0;
        
        for(int i = 0 ; i < n ; i++)
        {
            vector<bool> check(256,false);
            for(int j = i; j < n ; j++)
            {
                if(check[s[j]] == true)
                {
                    break;
                }
                else
                {
                    res = max(res,j-i+1);
                    check[s[j]] = true;
                }
            }
        }

        return res;
        
    }
};