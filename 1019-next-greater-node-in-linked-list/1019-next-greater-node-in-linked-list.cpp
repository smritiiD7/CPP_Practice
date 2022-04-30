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
    vector<int> nextLargerNodes(ListNode* head) {
       vector<int> ans;
        while(head->next!=NULL)
        {
            int cnt;
            ListNode* temp = head->next;
            while(temp)
            {
                cnt=0;
                if(head->val<temp->val){
                    ans.push_back(temp->val);
                    cnt++;
                    break;
                }
                temp=temp->next;
            }
            if(cnt==0) ans.push_back(0);
            head=head->next;
            
        }
        ans.push_back(0);
        return ans;
    }
};