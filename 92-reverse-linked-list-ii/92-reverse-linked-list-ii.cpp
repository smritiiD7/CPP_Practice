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
    ListNode* reverseBetween(ListNode* A, int B, int C) {
         vector<int> v;
    ListNode *curr(A);
    for(int i=0;i<B-1;i++)
    {
        curr=curr->next;
    } 
    ListNode *temp(curr);
    for(int i=0;i<C-B+1;i++)
    {
        v.push_back(curr->val);
        curr=curr->next;
    }
    reverse(v.begin(),v.end());
    int j=0;
    while(temp!=curr)
    {
        temp->val=v[j++];
        temp=temp->next;
    }
    return A;

    }
};