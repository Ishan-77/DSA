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

class cmp {
    public:
    bool operator() (ListNode* a , ListNode * b) {
        return a->val > b->val; // reverse in pq
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*,vector<ListNode*>,cmp> pq; // deafult max heap we change using cmp 
        //function
        
        for(ListNode* t:lists)
        {
             if(t) pq.push(t);
        }
        ListNode* head = NULL;
        ListNode* tail  = NULL;
        
        while(!pq.empty())
        {
          ListNode* t  =  pq.top(); // smallest node val
            pq.pop();
            
            if(head == NULL)
            {
                head =  t;
                tail  = t;
            }
            else // head not null means already nodes are present 
            {
               tail->next  =  t;
                tail = t;
            }
            
            if(t->next)
            {
                pq.push(t->next);
            }
        }
        return head;
        
    }
};