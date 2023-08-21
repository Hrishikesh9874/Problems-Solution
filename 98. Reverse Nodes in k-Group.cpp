class Solution {
private:
    ListNode* rec(ListNode* &head, int k, int size){
        if(head==NULL || size<k){
            return head;
        }

        int cnt=0;
        ListNode* curr=head;
        ListNode* fwd=NULL;
        ListNode* prev=NULL;

        while(curr != NULL && cnt<k){
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            cnt++;
        }

        if(fwd != NULL){
            head->next=rec(fwd, k, size-cnt);
        }
        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        int size=0;

        while(curr != NULL){
            curr=curr->next;
            size++;
        }
        cout<<size;
        return rec(head, k, size);

    }
};
