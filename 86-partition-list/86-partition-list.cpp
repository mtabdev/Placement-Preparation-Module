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
    ListNode* partition(ListNode* head, int x) {
        
        ListNode* sm= new ListNode(-1);
        ListNode *smptr=sm;
        ListNode* lg= new ListNode(-1);
        ListNode *lgptr=lg;
        
        
        while(head!=NULL){
            
            if(head->val <x){
                smptr->next=head;
                smptr=smptr->next;
                head=head->next;
                smptr->next=NULL;
                
            }else{
                lgptr->next=head;
                lgptr=lgptr->next;
                head=head->next;
                lgptr->next=NULL;
            }
            
            
            
        }
        smptr->next=lg->next;
        return sm->next;
    }
};