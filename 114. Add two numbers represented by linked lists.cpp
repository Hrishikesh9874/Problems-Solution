class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* pre=NULL;
        Node* fwd=NULL;
        
        while(curr != NULL){
            fwd=curr->next;
            curr->next=pre;
            pre=curr;
            curr=fwd;
        }
        return pre;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first=reverse(first);
        second=reverse(second);
        
        Node* ans = new Node(-1);
        Node* temp = ans;
        int carry=0;
        
        while(first != NULL || second != NULL || carry){
            int sum=0;
            
            if(first != NULL){
                sum+=first->data;
                first=first->next;
            }
            if(second != NULL){
                sum+=second->data;
                second=second->next;
            }
            
            sum+=carry;
            carry=sum/10;
            
            Node* element = new Node(sum%10);
            temp->next=element;
            temp=temp->next;
        }
        
        ans=ans->next;
        ans=reverse(ans);
        
        return ans;
        
    }
};
