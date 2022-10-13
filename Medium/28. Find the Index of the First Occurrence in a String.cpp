//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
class Solution {
public:
    int strStr(string haystack, string needle) {

        int n1 = haystack.size();
        int n2 = needle.size();
        int i = 0, j = 0;
        while(i < n1)
        {
            j = 0;
            while(j < n2)
            {
                if(haystack[i+j] == needle[j])
                {
                    j++;
                }
                else
                {
                    break;
                }
                
                if(j==n2)
                {
                    return i;
                }
            }
            i++;
        }

        return -1;
        
    }
};