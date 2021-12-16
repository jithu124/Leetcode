//https://leetcode.com/problems/add-two-numbers/
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * head = new ListNode(0);
        ListNode * tail = head;
        int carry=0,sum=0,a,b;
        
        while ((l1!= nullptr)||(l2!= nullptr ))
        {
            
            a = l1!=nullptr? l1->val :0;
            b = l2!=nullptr? l2->val :0;
            sum = a+b+carry;
            carry=sum/10;
            sum=sum%10;
            
            tail->next = new ListNode(sum,nullptr);
            tail=tail->next;
            
            l1=l1!=nullptr?l1->next:l1;
            l2=l2!=nullptr?l2->next:l2;
        } 
        
        if(carry>0)
        {
            tail->next = new ListNode(carry);
        }
        
        return head->next;
    }
};