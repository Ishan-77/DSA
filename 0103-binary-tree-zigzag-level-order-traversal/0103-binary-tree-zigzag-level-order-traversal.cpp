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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>fans;
        vector<int>ans;
        
        queue<TreeNode*>q;
        
        if(root== NULL) return fans;
        q.push(root);
        
        bool flag = false;
        while(!q.empty()){
            
            int x = q.size();
            
            while(x--) {
                TreeNode* front = q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                ans.push_back(front->val);
            }
           if(!flag) {
               fans.push_back(ans);
               ans.clear();
               flag = true;
           }
            else if(flag) {
                reverse(ans.begin(),ans.end());
                fans.push_back(ans);
                ans.clear();
                flag = false;
            }
            
        }
        return fans;
        
    }
};