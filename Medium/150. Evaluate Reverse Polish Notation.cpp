https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> mp = {"+","-","*","/"};
        vector <long> arr;
        long res;
        
        for(int i = 0; i < tokens.size(); i++)
        {
            if(mp.find(tokens[i]) == mp.end())//if no operators are found, then convert and store the numbers in vector
            {
                arr.push_back(stoi(tokens[i]));
            }
            else
            {
                long n2 = arr.back(); // operator found. pop the last two values and evaluate and store back the result in vector
                arr.pop_back();
                long  n1 = arr.back();
                arr.pop_back();
                
                if(tokens[i] == "+")
                {
                    res = n1+n2;
                }                
                else if(tokens[i] == "-")
                {
                    res = n1-n2;
                }
                else if(tokens[i] == "*")
                {
                    res = n1*n2;
                }
                else
                {
                    res = n1/n2;
                }
                arr.push_back(res);
            }
        }
        
        return arr.back();
        
    }
};