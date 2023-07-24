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
    
    void helper(TreeNode* root,int targetSum,vector<int>&path,vector<vector<int>>&ans) {
        if(!root) return;
        
        path.push_back(root->val);
        
        
        if(!root->left && !root->right && targetSum == root->val) {
            ans.push_back(path);
            
        }
        helper(root->left,targetSum-root->val,path,ans);
       
        helper(root->right,targetSum-root->val,path,ans);
         path.pop_back();
       
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        
        helper(root,targetSum,path,ans);
        
        return ans;
        
    }
};