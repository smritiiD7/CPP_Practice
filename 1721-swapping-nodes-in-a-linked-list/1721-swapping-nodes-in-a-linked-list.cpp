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
        ListNode *cnt(head);
        int n = 0;
        while(cnt!=NULL)
        {
            cnt=cnt->next;
            n++;
        }
        ListNode *first(head);
        ListNode *sec(head);
        int pos1=1,pos2=1;
        while(pos1!=k)
        {
            first=first->next;
            pos1++;
        }
        while(pos2!=n-k+1)
        {
            sec=sec->next;
            pos2++;
        }
        swap(first->val,sec->val);
        return head;
        
    }
};