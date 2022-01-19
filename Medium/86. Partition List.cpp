https://leetcode.com/problems/partition-list/

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
    ListNode* partition(ListNode* head, int x) {
        ListNode * return_head;
        ListNode * small = new ListNode(0);
        ListNode * large = new ListNode(0);
        ListNode * temp = head;
        return_head = small;
        ListNode *  mid = large;
        
        while(temp!=NULL)
        {
            if(temp->val < x)
            {
               small->next = new ListNode(temp->val);
               small = small->next; 
            }
            else
            {
                large->next = new ListNode(temp->val);
                large = large->next;
            }
            temp = temp->next;
        }
        
        small->next = mid->next;
        return return_head->next;
        
    }
};