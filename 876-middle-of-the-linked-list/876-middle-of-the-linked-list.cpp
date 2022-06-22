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
    ListNode* middleNode(ListNode* head) {
        if(head ==NULL) return NULL;
      int mid,cnt=0;
      ListNode *curr(head);
      while(curr)
      {
       cnt++;
       curr=curr->next; 
      }
       mid = (cnt/2)+1;
       while(mid>1)
       {
         head=head->next;  
           mid--;
       }
        return head;
    }
};