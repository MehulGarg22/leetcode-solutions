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
        vector<int> v;
        if(lists.size()==0 || lists[0]==NULL){
            return NULL;
        }
        for(int i=0; i<lists.size(); i++){
            ListNode* itr=lists[i];
            while(itr!=NULL){
                v.push_back(itr->val);
                itr=itr->next;
            }
        }
        sort(v.begin(), v.end());
        
        ListNode* dummy=new ListNode(0);
        ListNode* ptr=dummy;

        for(int i=0; i<v.size(); i++){
            ptr->next=new ListNode(v[i]);
            ptr=ptr->next;
        }
        return dummy->next;
    }
};
