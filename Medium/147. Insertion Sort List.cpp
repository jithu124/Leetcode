//https://leetcode.com/problems/insertion-sort-list/

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
    ListNode* insertionSortList(ListNode* head) {
        
        ListNode* d = new ListNode();
        ListNode* temp,*current;
        d->next = head;
        
        while(head->next)//the node head is the end of a sorted linked list. so everything before it is sorted
        {
            temp = d;
            current = head->next;//the node after the sorted list
            
            while((temp->next != current)&&(temp->next->val <= current->val) )
            {
                temp = temp->next;//iterate till a node from beginning is found which is >= current->val
            }
            
            if(head == temp)//if temp is head i.e the next node is the current node, then make the next node the head. All nodes till now is less than the current.Thus the node till current is sorted. Start the next iteration 
            {
                head = head->next;
            }
            else // make the head as next node of current. Next of current and next of temp. Next of temp as current. Thus current is in between temp and temp->next
            {
                head->next = current->next;
                current->next = temp->next;
                temp->next = current;
            }
        }
        
        return d->next;
        
    }
};
