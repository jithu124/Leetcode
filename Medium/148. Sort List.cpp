//https://leetcode.com/problems/sort-list/

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
    ListNode* sortList(ListNode* head) {
        
        ListNode* temp = head;
        vector<int> res;
        while(temp!=NULL)
        {
            res.push_back(temp->val);
            temp = temp->next;
        }
        
        int n = res.size();
        if(n==1 || n==0)
        {
            return head;
        }
        sort(res.begin(),res.end());
        ListNode * new_head = new ListNode(res[0]);
        ListNode * ret = new_head;
        
        
        
        for(int i = 1;i < n;i++)
        {
            new_head->next = new ListNode(res[i]);
            new_head = new_head->next;
        }
        
        return ret;
    }
};