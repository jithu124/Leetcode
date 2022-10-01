//https://leetcode.com/problems/validate-binary-search-tree/
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
    bool isValidBST(TreeNode* root) {
        if(root == NULL)
        {
            return true;
        }
        else
        {
            return check1(root->left, root->val) &&
            check2(root->right, root->val) && isValidBST(root->left) && isValidBST(root->right);

        }
        
    }

bool check1(TreeNode * root,int val)
{
    if(root == NULL)
    {
        return true;
    }
    else
    {
        return (root->val < val) && check1(root->left,val) && check1(root->right,val) ;
    }
}

bool check2(TreeNode * root,int val)
{
    if(root == NULL)
    {
        return true;
    }
    else
    {
        return (root->val > val) && check2(root->left,val) && check2(root->right,val);
    }
}

};


