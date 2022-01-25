https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {        
        set<ListNode *> s;
        ListNode * temp = head;
        while(temp != NULL)
        {
            if(s.find(temp) != s.end())
            {
                return temp;
            }
            else
            {
                s.insert(temp);

            }
            temp = temp->next;
                
        }
        
       return NULL;
        
    }
};
