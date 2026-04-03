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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr=head;

        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        if (count == n) {
            return head->next; 
        }
        int terminateValue=count-n-1;
        curr=head;
        int count2=0;
        while(curr!=NULL && count2!=terminateValue){
            curr=curr->next;
            count2++;
        }
        curr->next=curr->next->next;
        return head;
    }
};
