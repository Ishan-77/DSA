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
    bool checkPalindrome(vector<int> v)
    {
        int s = 0;
        int e = v.size()-1;
        
        while(s<=e)
        {
            if(v[s]!=v[e])
            {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* curr = head;
        while(curr!=NULL) 
        {
           v.push_back(curr->val);
            curr = curr->next;
        }
        return checkPalindrome(v);
    }
};