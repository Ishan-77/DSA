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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0 ) return head;
       ListNode* temp = head;
        int l=0;
        while(temp->next)
        {
            temp= temp->next;
            l++;
            
        }
        temp->next = head;
         k = k%(l+1);
        int jump = l-k;
        temp= head;
        while(jump--)
        {
            temp =  temp->next;
        }
        ListNode* nhead = temp->next;
        temp->next = NULL;
        return nhead;
    }
};