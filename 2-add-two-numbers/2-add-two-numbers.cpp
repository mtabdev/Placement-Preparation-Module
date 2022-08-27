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
        
        ListNode* h1=new ListNode(0);
        ListNode* p=h1;
        
        int c=0,sum=0;
        while(l1 || l2){
            
            int d1=(l1==NULL)?0:l1->val;
            int d2=(l2==NULL)?0:l2->val;
            
            sum=c+d1+d2;
            c=sum/10;
            p->next=new ListNode(sum%10);
            p=p->next;
            
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
            
            
        }
        if(c>0){ p->next=new ListNode(c);}
        return h1->next;
        
    }
};