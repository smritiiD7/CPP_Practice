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
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        vector<int> v;
        ListNode* curr(head);
        ListNode *temp = new ListNode;
        ListNode *res(temp);
        while(curr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        int n = v.size(),i=0;
        while(i<n)
        {
            temp->next = new ListNode(v[i]);
            temp=temp->next;
            i++;
        }
        return res->next;
    }
};