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
    int minDepth(TreeNode* root) {
        
        if(root== NULL) return 0;
        queue<TreeNode*> q;
        int d = 1;
        
        q.push(root);
        
        while(!q.empty()) {
            int x = q.size();
            
            while(x--) {
                TreeNode* t = q.front();
                q.pop();
                if(!t->left && !t->right) return d;
                
                if(t->left) {
                    q.push(t->left);
                }
                if(t->right) {
                    q.push(t->right);
                }
            }
            d++;
        }
        return -1;
        
    }
};