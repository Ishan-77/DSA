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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = 0;
        if(!head || !head->next)
            return nullptr;
        ListNode *temp = head;
        while(temp)
            temp = temp->next, sz++;
        sz -= n - 1;
        if(sz == 1)
            return head->next;
        ListNode *prev = nullptr;
        temp = nullptr;
        while(sz--){
            if(!prev)
                prev = temp = head;
            else
                prev = temp,
                temp = temp->next;
        }
        prev->next = temp->next;
        return head;
    }
};