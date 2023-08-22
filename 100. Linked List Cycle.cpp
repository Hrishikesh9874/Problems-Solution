lass Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
        return 0;
    }

    map<ListNode*, bool>visited;
    ListNode* temp=head;

    while(temp != NULL){

        if(visited[temp]==1){
            return 1;
        }
        
        visited[temp]=1;
        temp=temp->next;
    }
    return 0;
    }
};
