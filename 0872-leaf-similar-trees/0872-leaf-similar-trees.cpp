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
    
    
    void solve(TreeNode*root,vector<int>&ans) {
        
        if(!root) return;
        
        if(!root->left && !root->right) {
            ans.push_back(root->val);
        }
        solve(root->left,ans);
        solve(root->right,ans);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int>t1;
        vector<int>t2;
        
        solve(root1,t1);
        solve(root2,t2);
        
        return t1==t2;
        
        
        
    }
};