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
    
    bool isSym(TreeNode*r1,TreeNode*r2) {
        if(r1==NULL && r2==NULL) return true;
          else if(!r1 || !r2) return false;
        
        else if(r1->val!=r2->val) return false; // both root not null
        
        return isSym(r1->left,r2->right) && isSym(r1->right,r2->left);
        
        
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        
        return isSym(root->left,root->right);
        
    }
};