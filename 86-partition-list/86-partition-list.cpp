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
    ListNode* partition(ListNode* head, int x) {
      ListNode* firstHalf = new ListNode(-1);
      ListNode* newhead(firstHalf);
      ListNode* secondHalf = new ListNode(-1);
      ListNode* secondHalfStart(secondHalf);
        
     while(head)
     {
         if(head->val < x)
         {
             firstHalf->next = new ListNode(head->val);
             firstHalf= firstHalf->next;
             head=head->next;
         }
         else
         {
             secondHalf->next =  new ListNode(head->val);
             secondHalf = secondHalf->next;
             head=head->next;
         }  
         
         firstHalf->next = secondHalfStart->next;
         
     }
        return newhead->next;
    }
        
        
    
};