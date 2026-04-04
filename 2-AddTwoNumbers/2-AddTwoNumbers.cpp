// Last updated: 4/5/2026, 12:16:12 AM
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
   ListNode*head=NULL;
ListNode*sum(ListNode*l1,ListNode*l2,int carry){
    
     ListNode* temp=new ListNode;
     if(l1==NULL&&l2==NULL) {
        if(carry!=0){
            temp->val=carry;
            temp->next=NULL;
            ListNode*Temp=head;
            while(Temp->next!=NULL){
                Temp=Temp->next;
            }
            Temp->next=temp;
            
        }
        return head;
    }
    if(l1!=NULL&&l2!=NULL){
        temp->val=(l1->val+l2->val+carry)%10;
        temp->next=NULL;
        carry=((l1->val+l2->val+carry)/10)%10;
        l1=l1->next;
        l2=l2->next;
    }
    else if(l1==NULL&&l2!=NULL){
        temp->val=(l2->val+carry)%10;
        temp->next=NULL;
        carry=((l2->val+carry)/10)%10;
        l2=l2->next;
    }
    else if(l1!=NULL&&l2==NULL){
         temp->val=(l1->val+carry)%10;
        temp->next=NULL;
        carry=((l1->val+carry)/10)%10;
        l1=l1->next;
    }
    if(head==NULL) head=temp;
    else{
        ListNode*curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=temp;
    }
    return sum(l1,l2,carry);

}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return sum(l1,l2,0);
    }
};