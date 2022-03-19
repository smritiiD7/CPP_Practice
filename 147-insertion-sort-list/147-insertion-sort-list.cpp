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
    ListNode* insertionSortList(ListNode* head) {
        
    vector<int> v;
    ListNode *curr(head);
    ListNode *res = new ListNode(-1);
    ListNode *temp(res);
    while(curr!=NULL)
    {
        v.push_back(curr->val);
        curr=curr->next;
    }
    sort(v.begin(),v.end());
    int i =0;
    while(i<v.size())
    {
      res->next = new ListNode(v[i++]);
      res=res->next;
    }
    return temp->next;
}
};