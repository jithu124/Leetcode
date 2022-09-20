https://leetcode.com/problems/two-sum-less-than-k/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int K) {
		sort(numbers.begin(),numbers.end());
        
        int i = 0, j = numbers.size()-1;
        int ans = INT_MIN;
        while(i<j)
        {
            if(numbers[i]+numbers[j] >= K)
            {
                j--
            }
            else
			{
				ans = std::max(ans,numbers[i]+numbers[j]);
				i--;
			}
            
        }
        return ans;  
    }
};