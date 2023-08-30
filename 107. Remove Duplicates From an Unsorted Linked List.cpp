Node *removeDuplicates(Node *head)
{
    // Write your code here
    unordered_map<int, bool>mp;
    Node* temp=head;
    while(temp->next != NULL && temp != NULL){
        if(mp[temp->next->data] == 1){
            temp->next=temp->next->next;
        }else{
            mp[temp->data]=1;
            if(mp[temp->next->data] == 0){
                temp=temp->next;
            }
        }
    }
    return head;
}
