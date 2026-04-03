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
    ListNode* reverseLinkedList(ListNode* start, ListNode* end){
        ListNode* prevPtr=NULL;
        ListNode* currPtr=start;
        ListNode*nextPtr;

        while(currPtr!=end){
            nextPtr=currPtr->next;
            currPtr->next=prevPtr;
            prevPtr=currPtr;
            currPtr=nextPtr;
        }   

        return prevPtr;
    }

    ListNode* countGroup (ListNode* curr, int k){
        while(curr!=NULL && k>0){
            curr=curr->next;
            k--;
        }
        return curr;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* prevPtr=new ListNode(0, head);
        ListNode* dummy=prevPtr;

        while(true){
            ListNode* kth= countGroup(dummy, k);
            if(kth==NULL) break;

            ListNode* startGroup= dummy->next;
            ListNode* endGroup=kth->next;

            ListNode* reverseHead=reverseLinkedList(startGroup, endGroup);
            startGroup->next=endGroup;
            dummy->next=reverseHead;
            dummy=startGroup;
        }
        return prevPtr->next;
    }
};
