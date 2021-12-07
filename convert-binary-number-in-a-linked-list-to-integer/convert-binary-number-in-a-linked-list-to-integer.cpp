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
    int getDecimalValue(ListNode* head) {
        ListNode * temp(head);
        string s;
        int k=0;
        int sum=0;
        while(temp)
        {
            char ch = temp->val;
            s+=ch;
            temp=temp->next;
        }
        for(int i= s.length()-1;i>=0;i--)
        {
            sum+=s[i]*pow(2,k);
            k++;
        }
        return sum;
    }
};