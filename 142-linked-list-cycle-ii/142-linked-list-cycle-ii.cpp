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
       set<ListNode*> set1;
        if(head==NULL) return NULL;
       ListNode *curr(head);
      while(curr)
      {
          if(set1.find(curr)!=set1.end())
              return curr;
          else
          {
              set1.insert(curr);
          }
          
          curr=curr->next;
      }
        
        return NULL;
        
    }
};