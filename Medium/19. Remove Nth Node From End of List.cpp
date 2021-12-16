//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int l=0,i;
        ListNode* temp = head;
        ListNode* result = head;
        while(temp!=nullptr)
        {
            temp = temp->next;
            l++;
        }
        
        i = l - n;
        
        ListNode* temp2 = head;
        i=i-1;
        
        if(i>=-1)
        {   
            if(i==-1)
            {
                if(head->next!=nullptr)
                head=head->next;
                else
                head = nullptr;    
            }
            else 
            {    
              while(i>0)
              {
                  temp2=temp2->next;
                  i--;
              }
                
             if(temp2->next!=nullptr)
             temp2->next = temp2->next->next;
            
            }
               
            
            result = head;
        }
        else
            {
                result = nullptr;
            }
        return result;
        
    }
};