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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>m;
        for(auto x:nums)
        {
            m[x]++;
        }
        ListNode* curr;
        ListNode* prev;
        curr=prev=head;
        while(curr!=NULL)
        {
            if(m[curr->val]!=0)
            {
                if(prev==curr)
                {
                    if(head==curr)
                    {
                        head=head->next;
                    }
                    curr=curr->next;
                    prev=curr;
                }
                else
                {
                    curr=curr->next;
                    prev->next=curr;
                }
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};