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
    ListNode *detectCycle(ListNode *head) { //using Floyd’s loop detection algorithm
        
        ListNode * slow = head;
        ListNode * fast = head;
        
       if (head == NULL || head->next == NULL)
       {
           return NULL;
       }
        else
       {
       
            while(fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
                if(slow==fast)
                {
                    break;
                }
            }
            
            if(slow!=fast)
            {
                return NULL;
            }
            
            slow = head;
            while(slow && fast)
            {
                if(slow==fast)
                {
                    break;
                }
                slow = slow->next;
                fast = fast->next;
            }

        }
     
       
       return slow;

        /*        
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
       */
        
    }
};
