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
        
        int c=0;
        ListNode *head=new ListNode(0);
        ListNode *ptr=head;
        
        while(l1!=NULL || l2!=NULL){
            
            int x=(l1==NULL)?0:l1->val;
            int y=(l2==NULL)?0:l2->val;
            
            int sum=(x+y+c);
            int digit=sum%10;
            c=sum/10;
            
            ptr->next=new ListNode(digit);
            ptr=ptr->next;
            
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
            
        }
        if(c>0){
            ptr->next=new ListNode(c);
            ptr=ptr->next;
        }
        return head->next;
        
    }
};