Node* sortList(Node *head){
    // Write your code here.
    Node* zero = new Node(-1);
    Node* z=zero;
    Node* one = new Node(-1);
    Node* o=one;
    Node* two = new Node(-1);
    Node* t=two;
    
    Node* temp=head;
    while(temp != NULL){
        if(temp->data == 0){
            z->next=temp;
            z=z->next;
        }
        else if(temp->data == 1){
            o->next=temp;
            o=o->next;
        }
        else if(temp->data == 2){
            t->next=temp;
            t=t->next;
        }
        temp=temp->next;
    }
    
    if(one->next != NULL && two->next !=NULL){
        z->next=one->next;
        o->next=two->next;
        t->next=NULL;
    }

    if(one->next == NULL && two->next !=NULL){
        z->next=two->next;
        t->next=NULL;
    }

    if(one->next != NULL && two->next == NULL){
        z->next=one->next;
        o->next=NULL;
    }

    if(one->next == NULL && two->next == NULL){
        z->next=NULL;
    }


    return zero->next;
}
