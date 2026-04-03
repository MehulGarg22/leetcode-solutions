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
    bool hasCycle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* ptrSlow=head;
        ListNode* ptrFast=head->next;
        while(ptrFast!=NULL && ptrFast->next!=NULL){
            if(ptrSlow==ptrFast){
                return true;
            }
            ptrSlow=ptrSlow->next;
            ptrFast=ptrFast->next->next;
        }
        return false;
    }
};
