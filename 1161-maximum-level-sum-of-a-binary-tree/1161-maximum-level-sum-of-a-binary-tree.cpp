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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        int maxi = INT_MIN;
        
        int l = 0;
        int ans = 0;
        int l_num =0;
        
        while(!q.empty()) {
            int x = q.size();
            l++;
            int sum = 0;
            
            while(x--) {
                TreeNode* front = q.front();
                q.pop();
                
                sum+=front->val;
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }
            if(sum  > maxi) {
               maxi = sum;
                l_num = l;
            }
        }
        return l_num;
        
    }
};