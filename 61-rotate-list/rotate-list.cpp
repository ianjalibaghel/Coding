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
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL ||k==0) 
            return head;
        int n=1;
        ListNode* curr=head;

        while(curr->next){
            curr=curr->next;
            n++;
        }
        //created the circular LL
        curr->next=head;
        k=k%n;
        ListNode* newtail=head;
        ListNode* newhead=head;
        for(int i=1;i<n-k;i++){
            newtail=newtail->next;
        }
        newhead=newtail->next;
        newtail->next=NULL;

        return newhead;
    }
};