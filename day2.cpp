/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void inorder(TreeNode* original, TreeNode* cloned, TreeNode* &ans, TreeNode* target)
    {
        if(original == NULL || cloned == NULL)
            return;
        inorder(original->left, cloned->left, ans, target);
        if(original == target)
            ans = cloned;
        inorder(original->right, cloned->right, ans, target);
        
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        inorder(original, cloned, ans, target);
        return ans;
    }
};
