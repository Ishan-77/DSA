/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>v;
        int ans = 0;
        while(head)
        {
            v.push_back(head->val);
            head = head->next;
        }
        for(int i=0,j=v.size()-1;i<j;i++,j--)
        {
            if(v[i]+v[j]>ans)
                ans = v[i]+v[j];
        }
        return ans;
        
    }
};