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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=new ListNode(0);
        ListNode* ptr=head;
        ListNode *f=list1,*s=list2;
        while(f!=NULL && s!=NULL ){
            
            if(f->val<s->val){
                
                ListNode* nn=new ListNode(f->val);
                ptr->next=nn;
                ptr=ptr->next;
                f=f->next;
            }
            
            else{
                
                
                ListNode* ns=new ListNode(s->val);
                ptr->next=ns;
                ptr=ptr->next;
                s=s->next;
            }
            
            
        }
        while(f!=NULL){
            
             ListNode* nn=new ListNode(f->val);
                ptr->next=nn;
                ptr=ptr->next;
                f=f->next;
            
            
        }
         while(s!=NULL){
            
             ListNode* ns=new ListNode(s->val);
                ptr->next=ns;
                ptr=ptr->next;
                s=s->next;
            
            
        }
        
        return head->next;
        
    }
};