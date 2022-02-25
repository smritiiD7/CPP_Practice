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
    void reorderList(ListNode* head) {
       vector<int> v;
        ListNode *curr(head);
        while(curr)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int n =v.size();
        int left = 0 , right = n-1;
        for(int i=0;i<n;i++,head=head->next)
        {
            if(i%2 ==0)
                head->val=v[left++];
            else
                head->val=v[right--];
        }
    } 
};