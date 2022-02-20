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
    ListNode* mergeNodes(ListNode* head) {
       ListNode * curr = new ListNode;
        curr = head;
        ListNode *temp(curr);
        head=head->next;
        
        while(head)
        {
            int sum=0;
            while(head->val)
            {
                sum+=head->val;
                head=head->next;
            }
            curr->next=new ListNode(sum);
            curr=curr->next;
            head=head->next;
        }
        return temp->next;
    }
};