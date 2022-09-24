https://leetcode.com/problems/swap-nodes-in-pairs/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode * p = head;
        ListNode * q = head != NULL ? head->next : NULL;        
        ListNode * temp;
        ListNode * dummyhead = new ListNode(0,p);
        ListNode * prev = dummyhead;
        while((p != NULL) &&(q != NULL))
            
        {
            
            temp = q->next;
            q->next = p;
            p->next = temp;
            prev->next = q;
            prev = p;            
            p = temp ;
            q = temp != NULL ? temp->next : NULL;
        }
        
        return dummyhead->next;
    }
};