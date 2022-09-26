https://leetcode.com/problems/copy-list-with-random-pointer/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node * dummyHead =  new Node(0);
        Node * p = dummyHead;
        Node * temp = head;
        unordered_map <Node*, Node*> mp;
        
        while(temp != NULL)
        {
            p->next = new Node(temp->val);
            mp[temp] = p->next;  // map the address of old graph with the new one.
            temp = temp->next;
            p = p->next;
        }
        p = dummyHead->next;
        temp = head;
        
        while(temp != NULL)
        {
            p->random = mp[temp->random];
            temp = temp->next;
            p = p->next;
        }
        
        return dummyHead->next;      
          
    }
};