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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL || head->next==NULL|| head==NULL)
            return {-1,-1};
        ListNode * prev = head;
        vector<int> pos;
        head=head->next;
        int position=1;
        while(head->next!=NULL){
            if(head->val>prev->val && head->val>head->next->val || head->val<prev->val && head->val<head->next->val) 
            pos.push_back(position);
                position++;
                prev=head;
                head=head->next;
        }
        int n=pos.size();
        if(n<2)
            return {-1,-1};
        int maxi=pos[n-1]-pos[0];
        int mini=INT_MAX;
        for(int i=0;i<pos.size()-1;i++)
        {
            mini=min(mini,(pos[i+1]-pos[i]));
        }
        return {mini,maxi};
    }
};