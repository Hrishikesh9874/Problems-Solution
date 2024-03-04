Node* sortList(Node *head){
    // Write your code here.
    int count0=0;
    int count1=0;
    int count2=0;
    Node* temp=head;
    while(temp != NULL){
        if(temp->data == 0){
            count0++;
        }
        else if(temp->data == 1){
            count1++;
        }
        else if(temp->data == 2){
            count2++;
        }
        temp=temp->next;
    }

    Node* ans=head;
    while(count0--){
        ans->data=0;
        ans=ans->next;
    }
    while(count1--){
        ans->data=1;
        ans=ans->next;
    }
    while(count2--){
        ans->data=2;
        ans=ans->next;
    }
    return head;
}






//    This can be used to sort any linked list not just 0, 1 & 2
        map<int, bool>available;
        map<int, int>mymap;
        Node* temp = head;
        
        while(temp != NULL){
            
            if(available[temp->data] == 0){
                mymap[temp->data] = mymap[temp->data] + 1;
            }
            else{
                available[temp->data]=1;
                mymap[temp->data] = 1;
            }
            temp = temp->next;
            
        }
        
        temp = head;
        
        for(auto it=mymap.begin(); it!=mymap.end(); it++){
            int d = it->first;
            int n = it->second;
            
            while(n--){
                temp->data = d;
                temp = temp->next;
            }
        }
    
        return head;
