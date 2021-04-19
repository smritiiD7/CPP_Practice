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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode *p(head),*t(head);
            while(n)
            {
                    p=p->next;
                    n--;
            }
            if(p==NULL)
                    return head->next;
            while(p->next!=NULL)
            {
                    t=t->next;
                    p=p->next;
            }
            t->next=t->next->next;
            return head;
        
    }
};