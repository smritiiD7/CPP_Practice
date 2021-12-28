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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp = head;
        ListNode* ans;

        while(temp!=NULL)
        {
            count++;
            temp = temp->next; 
        }
        int index;
        if(count%2==1)
            index = count/2;
        else 
          index = count/2;
        for(int i=0;i<index;i++)
        {
            head=head->next;
        }
        ans = head;
        return ans;
    }
};