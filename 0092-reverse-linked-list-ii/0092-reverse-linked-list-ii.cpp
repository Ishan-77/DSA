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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        
        vector<int>ans;
        
        ListNode* temp = head;
        
        while(temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }
        reverse(ans.begin()+left-1,ans.begin()+right);
        
        ListNode* head2 = NULL;
        
      for(auto val:ans) {
          ListNode* node = new ListNode(val);
          
          if(head2 ==NULL) {
              head2 = node;
          }
          else {
              ListNode* curr = head2;
              
              while(curr->next!=NULL) {
                  curr=curr->next;
              }
              curr->next = node;
          }
      }
        return head2;
    }
};