DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* head=llist;
    if(head==NULL || head->next==NULL){
        return head;
    }
    DoublyLinkedListNode* back=NULL;
    DoublyLinkedListNode* curr=head;
    DoublyLinkedListNode* fwd=NULL;
    
    while(curr != NULL){
        fwd=curr->next;
        curr->next=back;
        curr->prev=fwd;
        back=curr;
        curr=fwd;
    }
    return back;
}
