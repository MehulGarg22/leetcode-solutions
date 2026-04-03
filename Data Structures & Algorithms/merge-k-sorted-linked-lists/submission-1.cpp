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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0 || (lists.size()==0 && lists[0]==0)) return NULL;
        vector<int>v;

        for(int i=0; i<lists.size(); i++){
            ListNode* temp=lists[i];
            while(temp!=NULL){
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(v.begin(), v.end());
        ListNode* newList= new ListNode(0);
        ListNode* dummy=newList;

        for(int i=0; i<v.size(); i++){
            ListNode* newLists= new ListNode(v[i]);
            dummy->next=newLists;
            dummy=dummy->next;
        }
        return newList->next;
    }
};
