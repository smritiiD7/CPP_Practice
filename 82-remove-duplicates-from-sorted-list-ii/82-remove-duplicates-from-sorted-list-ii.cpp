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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
      map<int,int> freq;
      ListNode* curr(head);
      
      while(curr)
      {
         freq[curr->val] ++;
          curr=curr->next;
      }
        
      ListNode* newHead = new ListNode(-1);
      ListNode* temp(newHead);
      
        for(auto i : freq)
        {
            if(i.second<2)
            {
                newHead->next = new ListNode(i.first);
                newHead=newHead->next;
            }
        }
        
        return temp->next;
    
        
    }
    
};