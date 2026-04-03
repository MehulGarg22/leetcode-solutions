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
        ListNode* result=new ListNode(0);
        ListNode* resultPtr=result;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int sum=carry;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            sum=sum%10;

            ListNode* sumNode=new ListNode (sum);
            resultPtr->next=sumNode;
            resultPtr=resultPtr->next;
        }
        if(carry==1){
            resultPtr->next=new ListNode (carry);
        }
        return result->next;
    }
};
