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
         map<int,int> mp;
        ListNode* temp(head);
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode *dummy=new ListNode(0);
        ListNode *curr(dummy);
        for(auto i:mp)
        {
            if(i.second==1)
            {
                curr->next= new ListNode(i.first);
                curr=curr->next;
            }
        }
        return dummy->next;
    }
};