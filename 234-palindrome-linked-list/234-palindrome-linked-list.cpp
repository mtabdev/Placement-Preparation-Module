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
    ListNode* reverse(ListNode* mid){
        
        ListNode* front,*cur,*prev;
        cur=mid;
        prev=NULL;
        
        while(cur!=NULL ){
            front=cur->next;
            cur->next=prev;
            prev=cur;
            cur=front;
            
            
            
            
        }
        mid=prev;
        
        
        return mid;
        
        
        
    }
    
    
    
    
    
    
    
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL &&head->next==NULL){
            return true;
        }
        
        ListNode* first=head;
        ListNode* second=head;
        
        
        while(second->next!=NULL && second->next->next!=NULL){
            
            first=first->next;
            second=second->next->next;
        }
        
        ListNode* nn=reverse(first->next);
        
        ListNode *ch=head;
        
        while(nn!=NULL ){
            if(nn->val != ch->val)
                return false;
            
            if(ch==NULL)
                return false;
            
            nn=nn->next;
            ch=ch->next;
            
        }
        
        return true;
        
    }
};