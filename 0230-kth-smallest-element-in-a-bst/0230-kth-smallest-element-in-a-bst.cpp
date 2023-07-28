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
    
    void inorder(TreeNode* root,vector<int>&ans,int k) {
        if(!root) return;
        inorder(root->left,ans,k);
        ans.push_back(root->val);
        inorder(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int fans ;
        vector<int>ans;
        inorder(root,ans,k);
        return ans[k-1];
        
    }
};