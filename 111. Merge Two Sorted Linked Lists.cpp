Node<int>* solve(Node<int>* first, Node<int>* second){

    if(first->next == NULL){
        first->next=second;
        return first;
    }

    Node<int>* f=first;
    Node<int>* s=second;
    
    while(f->next != NULL && s != NULL){
        if(f->data <= s->data && s->data <= f->next->data){
        //  Adding the node in middle and Updating the nodes for firther iteration
            second=s->next;
            s->next=f->next;
            f->next=s;
            s=second;
        }else{
            f=f->next;

            if(f->next == NULL){
                f->next=second;
                return first;
            }
        }
    }

        return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    if(first->data < second->data){
        return solve(first, second);
    }else{
        return solve(second, first);
    }
}
