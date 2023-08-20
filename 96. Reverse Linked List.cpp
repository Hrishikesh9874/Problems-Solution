//  Recursive Appproach
class Solution {
private:
    void rec(ListNode* &head, ListNode* &prev, ListNode* &curr){
        if(curr==NULL){
            head=prev;
            return;
        }

        ListNode* fwd=curr->next;
        curr->next=prev;
        rec(head, curr, fwd);
    }
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* fwd=NULL;

        rec(head, prev, curr);
        return head;
    }
};

//  Iterative Approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* fwd=NULL;

        while(curr != NULL){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
        }
        return prev;
    }
};
