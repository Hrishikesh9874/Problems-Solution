class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        //  creating clone list
        Node* temp=head;
        Node* clone = new Node(-1);
        Node* anst = clone;
        while(temp != nullptr){
            Node* e = new Node(temp->val);
            anst->next=e;
            anst=anst->next;
            temp=temp->next;
        }
        clone=clone->next;

        // creating a map
        unordered_map<Node*, Node*>pt;
        Node* t1 = head;
        Node* t2 = clone;

        while(t1 != nullptr){
            pt[t1]=t2;
            t1=t1->next;
            t2=t2->next;
        }

        t1=head;
        t2=clone;
        while(t1 != nullptr){
            t2->random=pt[t1->random];
            t1=t1->next;
            t2=t2->next;
        }

        return clone;
    }
};
