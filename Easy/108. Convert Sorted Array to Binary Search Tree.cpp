//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return addNode(nums,0,nums.size()-1);
    }

    TreeNode* addNode(vector<int> arr, int start, int end)
    {
       if(start > end)
       {
           return NULL;
       }

       int mid = (start + end)/2;
       TreeNode* root = new TreeNode(arr[mid]);
       root->left = addNode(arr,start,mid-1);
       root->right = addNode(arr,mid+1,end);
       return root;
    }
};