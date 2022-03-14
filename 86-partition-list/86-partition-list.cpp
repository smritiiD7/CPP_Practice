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
      ListNode *firstHalf = new ListNode(-1);
      ListNode *secondHalf = new ListNode(-1);
      ListNode *res(firstHalf);
      ListNode  *secondStart(secondHalf);
      ListNode *curr(head);
        while(curr)
        {
            if(curr->val<x)
            {
                firstHalf->next =new ListNode(curr->val);
                firstHalf=firstHalf->next;
                curr=curr->next;
            }
            else{
                secondHalf->next = new ListNode(curr->val);
                secondHalf=secondHalf->next;
                curr=curr->next;

            }
        }
        firstHalf->next=secondStart->next;
        return res->next;
    }
};