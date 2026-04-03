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

        Node* newNode=new Node(head->val);
        Node* newTemp=newNode;
        Node* oldTemp=head->next;
        unordered_map<Node*, Node*>mp;
        mp[head]=newTemp;

        while(oldTemp!=NULL){
            Node* copyNode=new Node(oldTemp->val);
            newTemp->next=copyNode;
            mp[oldTemp]=copyNode;



            newTemp=newTemp->next;
            oldTemp=oldTemp->next;
        }

        oldTemp=head;
        newTemp=newNode;

        while(oldTemp!=NULL){
            newTemp->random=mp[oldTemp->random];
            oldTemp=oldTemp->next;
            newTemp=newTemp->next;
        }
        return newNode;
    }
};
