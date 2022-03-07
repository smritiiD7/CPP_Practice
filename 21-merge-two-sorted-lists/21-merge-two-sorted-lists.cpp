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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
           map<int,int> mp;
        ListNode *curr1(l1),*curr2(l2);
        while(curr1)
        {
            mp[curr1->val]++;
            curr1=curr1->next;
        }
        while(curr2)
        {
            mp[curr2->val]++;
            curr2=curr2->next;
        }
        ListNode *dummy=new ListNode(0);
        ListNode *curr(dummy);
        for(auto i: mp)
        {
            while(i.second>0)
            {
                curr->next=new ListNode(i.first);
                curr=curr->next;
                i.second--;
            }
        }
        return dummy->next;
    }
};