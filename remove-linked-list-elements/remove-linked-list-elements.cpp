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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=new ListNode(-1);
        ListNode *curr(head);
        while(curr!=NULL)
        {
            if(curr->val==val)
            {
                if(curr==head)
                {
                    curr=curr->next;
                    head=curr;
                }
                else{
                temp->next=curr->next;
                curr=curr->next;
                }
            }
            else{
            temp=curr;
            curr=curr->next;
            }
        }
        return head;
    }
};