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

    ListNode* reverseList (ListNode* start, ListNode* end){
        ListNode* prevptr=NULL;
        ListNode* currptr=start;
        ListNode* nextptr;

        while(currptr!=end){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr; 
            currptr=nextptr;
        }
        return prevptr;
    }

    ListNode* Kthgroup(ListNode* head, int k){
        ListNode* ptr=head;
        while(k!=0 && ptr!=NULL){
            ptr=ptr->next;
            k--;
        }
        return ptr;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prevptr= new ListNode (0, head); //Cautious, we have to connect prevptr to our original list head
        ListNode* dummy=prevptr;
        
        while(true){
            ListNode* kth=Kthgroup(dummy, k);
            if (kth==NULL) break;
            ListNode* currptr=dummy->next;
            ListNode* endptr=kth->next;

            ListNode* newV=reverseList(currptr, endptr);
            currptr->next=endptr;
            dummy->next=newV;
            dummy=currptr;
        }
        return prevptr->next;
    }
};
