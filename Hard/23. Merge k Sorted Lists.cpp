https://leetcode.com/problems/merge-k-sorted-lists/
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

ListNode* mergelists(ListNode* l1, ListNode* l2);

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        int n = lists.size();
        if(n == 0)
        {
            return NULL;
        }
        
        while(n > 1)
        {
            int front = 0 ;
            int end = lists.size()-1;
            while(front < end)
            {
                lists[front] = mergelists(lists[front], lists[end]);
                lists.pop_back();
                front++;
                end--;
            }
            
            n = lists.size();
            
        }
        
        return lists[0];        
    }
};

ListNode* mergelists(ListNode* l1, ListNode* l2)
{
    ListNode* dummyhead = new ListNode(0);
    ListNode* p = dummyhead;
    
    while((l1 != NULL) && (l2 != NULL))
    {
        if(l1->val < l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        
        p = p->next;
    }
    
    if(l1 == NULL)
    {
        p->next = l2;
    }
    
    if(l2 == NULL)
    {
        p->next = l1;
    }
    
    return dummyhead->next;
}