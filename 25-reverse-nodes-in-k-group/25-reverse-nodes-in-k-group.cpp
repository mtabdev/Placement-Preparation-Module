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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
       // if(head==NULL ||head->next==NULL)return head;
        ListNode* nex, *cur=head,*prev=NULL;
        
        ListNode *temp=head; 
        for(int i=0;i<k;i++){
        if(temp==NULL) return head;
        temp=temp->next;
    }
        
       int c=0;
       while(cur!=NULL && c<k ){
           
           nex=cur->next;
           cur->next=prev;
           prev=cur;
           cur=nex;
           c++;
           
       } 
        
       if(nex!=NULL){
           head->next=reverseKGroup(nex,k);
       } 
        
        return prev;
        
    }
};