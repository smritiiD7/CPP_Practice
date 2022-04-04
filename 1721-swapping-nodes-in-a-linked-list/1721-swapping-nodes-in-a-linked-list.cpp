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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fast(head), *slow(head),  *curr(head);
        int n=0;
        while(curr!=NULL)
        {
            curr=curr->next;
            n++;
        }
       int cnt1 = k,cnt2 = n-k+1;
        while(cnt1>1)
        {
            slow=slow->next;
            cnt1--;
        }
        while(cnt2>1)
        {
            fast=fast->next;
            cnt2--;
        }
        swap(slow->val,fast->val);
        return head;
    }
};