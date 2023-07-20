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
    
    
    int  help(TreeNode* root,int&d) {
        // height of tree
        if(root == NULL) return 0;
        int l = help(root->left,d);
        int r = help(root->right,d);
        
        d = max(d,l+r);
        return max(l,r)+1;
    }
        
    int diameterOfBinaryTree(TreeNode* root) {
        int d =0;
        
        help(root,d);
        return d;
        
    }
};