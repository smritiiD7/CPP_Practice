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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
       vector<int> temp;
       ListNode *curr1(list1);
       ListNode *curr2(list2);
    
       while(curr1)
       {
           temp.push_back(curr1->val);
           curr1=curr1->next;
       }
       
        while(curr2)
        {
            temp.push_back(curr2->val);
            curr2=curr2->next;
        }
        
        sort(temp.begin(),temp.end());
        
        ListNode *list3 = new ListNode(temp[0]);
        ListNode *head(list3);
        for(int i=1;i<temp.size();i++)
        {
            ListNode *tempNode = new ListNode(temp[i]);
            list3->next = tempNode;
            list3=list3->next;
        }
        
        return head;
    }
};