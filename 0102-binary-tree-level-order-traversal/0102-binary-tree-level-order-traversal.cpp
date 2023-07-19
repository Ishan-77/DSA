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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        vector<vector<int>> fans;
        vector<int>ans;
        if(root == NULL) return fans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            int x = q.size();
            
            while(x--){
                TreeNode* front = q.front();
                q.pop();
                
                if(front->left) {
                    q.push(front->left);
                }
                if(front->right) {
                    q.push(front->right);
                }
                
                ans.push_back(front->val);
                
                
                
            }
            fans.push_back(ans);
            ans.clear();
            
            
        }
        return fans;
        
        
    }
};