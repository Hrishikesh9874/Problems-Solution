void remove(Node* head, Node* slow){

    //  Detecting loop node
    Node* temp=head;
    while(temp != slow){
        temp=temp->next;
        slow=slow->next;
    }
    
    //   Removing the cycle
    while(temp->next != slow){
        temp=temp->next;
    }
    temp->next=NULL;
    return;
}


Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    //  Applying Floyd's algorithm

    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            remove(head, slow);
            return head;
        }
    }
    return head;
}
