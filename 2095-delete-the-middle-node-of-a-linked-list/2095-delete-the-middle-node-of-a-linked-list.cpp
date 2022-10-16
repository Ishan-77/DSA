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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL) return  NULL;
        if(head->next==NULL)
            return NULL;
        ListNode * slow= head;
        ListNode * prev=NULL;
        ListNode * fast =  head;
        while(fast!=NULL && fast->next!=NULL)
        {   if(prev==NULL)
            prev=head;
         else
            prev=prev->next;
            fast=fast->next->next;
            slow=slow->next;
        }
        prev->next=slow->next;
        return head;
         
       
    }
};