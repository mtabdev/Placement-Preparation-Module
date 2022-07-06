/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        
        int c1=0,c2=0;  
        ListNode *a=headA,*b=headB;
        while(a!=NULL){
            c1++;
            a=a->next;
        }
        while(b!=NULL){
            c2++;
            b=b->next;
        }
        
        int diff=c1-c2;
        if(diff<0)while(diff++!=0)headB=headB->next;
        else{
            while(diff--!=0)headA=headA->next;
        }
        
        while(headA!=headB){
            headA=headA->next;
            
            headB=headB->next;
        }
        return headA;
        
    }
};