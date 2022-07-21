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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL) return NULL;
        vector<int> temp;
        ListNode* curr(head);
        while(curr)
        {
            temp.push_back(curr->val);
            curr=curr->next;
        }
        
        int low = left-1, high = right-1;
        while(low<high)
        {
            swap(temp[low],temp[high]);
            low++;
            high--;
        }
        
        ListNode* newhead = new ListNode(-1);
        ListNode* ans(newhead);
        for(int i : temp)
        {
            newhead->next = new ListNode(i);
            newhead=newhead->next;
        }
        return ans->next;
    }
};