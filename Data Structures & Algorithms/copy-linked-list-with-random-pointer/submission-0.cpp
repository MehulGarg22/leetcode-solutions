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
        if(head==NULL) return head;
        Node* newHead=new Node(head->val);
        Node* oldtemp=head->next;
        Node* newtemp=newHead;
        unordered_map<Node*, Node*> mp;
        mp[head]=newHead;
        while(oldtemp!=NULL){
            Node* copyNode=new Node(oldtemp->val);
            newtemp->next=copyNode;
            mp[oldtemp]=copyNode;
            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        oldtemp=head;
        newtemp=newHead;
        while(oldtemp!=NULL){
            newtemp->random=mp[oldtemp->random];

            oldtemp=oldtemp->next;
            newtemp=newtemp->next;
        }
        return newHead;
    }
};
