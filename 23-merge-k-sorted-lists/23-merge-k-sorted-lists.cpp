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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        map<int,int> mp;
       // if(lists.empty())
          //  return NULL;
        
        for(int i = 0; i < lists.size(); i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                //nums.push_back(temp->val), temp = temp->next;
                mp[temp->val]++;
            temp=temp->next;
            }
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