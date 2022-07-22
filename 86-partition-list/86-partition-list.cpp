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
        if(head==NULL) return NULL;
      vector<int> less, greater;
      ListNode* curr(head);
      
    while(curr)
    {
        if(curr->val<x)
            less.push_back(curr->val);
        else
            greater.push_back(curr->val);
        curr=curr->next;
    }
        ListNode* newHead = new ListNode(-1);
        ListNode* temp(newHead);
        
        for(int i : less)
        {
            newHead->next = new ListNode(i);
            newHead=newHead->next;
        }
        for(int i : greater)
        {
          newHead->next = new ListNode(i);
          newHead=newHead->next;  
        }
        return temp->next;
    }
};