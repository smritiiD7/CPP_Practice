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
       ListNode* curr(head);
       ListNode* newHead = new ListNode(-1);
       ListNode* temp(newHead);
       set<int> unique;
       while(curr)
       {
           unique.insert(curr->val);
           curr=curr->next;
       }
       for(int i : unique)
       {
           newHead->next = new ListNode(i);
           newHead = newHead->next;
       }
        return temp->next;
        
       
    }
};