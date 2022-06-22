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
    ListNode* reverseList(ListNode* head) {
      vector<int> temp;
      ListNode* curr(head);
     if(head==NULL) return NULL;
      while(curr)
      {
          temp.push_back(curr->val);
          curr=curr->next;
      }
        reverse(temp.begin(),temp.end());
        ListNode* head1 = new ListNode (temp[0]);
        ListNode* res(head1);
        for(int i =1;i<temp.size();i++)
        {
            head1->next = new ListNode(temp[i]);
            head1=head1->next;
        }
        return res;
    }
};