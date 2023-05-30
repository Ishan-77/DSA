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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        if(!head->next) return head;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* cnt_even = head->next;
        while(odd->next && even->next)
        {
            odd->next = even->next;
            even->next = odd->next->next;
            odd = odd->next;
            even   =  even->next;
        }
        odd->next = cnt_even;
        return head;
        
    }
};