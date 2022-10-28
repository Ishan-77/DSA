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
    void Reverse(ListNode *s,ListNode*e)
    {
       ListNode*prev=NULL,*curr=s,*n=s->next;
        while(prev!=e)
        {
            curr->next=prev;
            prev=curr;
            curr=n;
            if(n!=NULL) n=n->next;
            
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL||head->next==NULL||k==1)
           return head;
        ListNode * s=head;
        ListNode * e = head;
        int inc =  k-1;
        while(inc--)
        {   
            e=e->next;
            if(e==NULL) return head;
        }
     ListNode* nextHead = reverseKGroup(e->next,k);
        Reverse(s,e);
        s->next=nextHead;
        return e;
    }
};