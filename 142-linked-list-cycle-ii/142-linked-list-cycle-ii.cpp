/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       // ListNode *ind=new ListNode(-1);
       // int ind =-1;
        bool flag=false;
        ListNode*fast=head;
        ListNode *slow(head);
      while(fast&& fast->next)
      {
          fast=fast->next->next;
          slow=slow->next;
           if(fast == slow)
           {   flag=true;
               break;
           }
      }
        if(flag==true){
            fast=head;
            while(fast != slow) {
                slow = slow -> next;
                fast = fast -> next;
            }
            return slow;
        }
          //ind++;
          
      
        return NULL;
    }
};