//https://leetcode.com/problems/rotate-list/

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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode* temp=head;
        
        int n=0,z;
        while(temp!=nullptr){
            n++;temp=temp->next;
        }
        if(n==0 or n==1)
        {
            return head;
        }
        k=k%n;
        cout<<"n="<<n<<" k="<<k<<endl;
        
        
        while(k!=0){
            temp = head;
        int current=head->val;
        int prev=head->val;
        for(int i=0;i<n;i++)
        {
            z=1;
            while(z!=0)
            {   temp=temp->next;
                z--;
             
                if(temp==nullptr)
                {   
                   
                    temp=head;
                   
                        
                }
                
            }
            
            current=temp->val;
            temp->val=prev;
            prev=current;
        }
            k--;
        }
        
        
        
        return head;
        
    }
};